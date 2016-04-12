/*
 * Sinan Topkaya
 * Assignment 1
 * CS444
 * Referances:
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>
#include <unistd.h>
#include "mt19937ar.c"

#define BUFFER_SIZE 32

//prototypes
void* consumer(void *dummy);
void* producer(void *dummy);

//buffer struct holds 2 numbers
struct Data {
  	int value;
  	int wait_time;
};

//pthread lock
pthread_mutex_t mutex;
pthread_cond_t consumer_condition, producer_condition;


struct Data buffer[32];

//check if buffer is empty or not
int check_empty(int index) {
	int rv = 0;
	if(buffer[index].wait_time == 0 || buffer[index].value == 0) {
		rv = 1;
	}
	return rv;
}

//job of producer
void* producer(void *dummy) {
  	
	int producer_wait;				
  	struct Data data;
  	int index = 0;

  	while(1) {
		//producer waits a random second between 3 and 7
		producer_wait = genrand_int32() % 5 + 3;
 		sleep(producer_wait);
		
		//the producer produces a random number
		data.value = genrand_int32() % 100 + 1;

		//producer generates a random number between 2 and 9
    		data.wait_time = genrand_int32() % 8 + 2;
  		pthread_mutex_lock(&mutex);
		
		//if buffer is not empty signal
		while (buffer[index].value != 0) {		
      			pthread_cond_wait(&producer_condition, &mutex);
    		}

 		pthread_mutex_unlock(&mutex);	

		//check if the buffer is empty or less than 32, if so keep producing 
    		if(check_empty(index)) {
			pthread_mutex_lock(&mutex);
    			printf("Producer produced: %i on index[%i/32] and now will sleep for %i seconds\n", data.value, index, producer_wait);
		
			//if buffer is still not 32 keep increasing by 1
			buffer[index] = data;
    			if (index != 32){
      				index += 1;
 			}
    			else
      			index = 0;
    		}
    		pthread_cond_signal(&consumer_condition);
    		pthread_mutex_unlock(&mutex);
   		 
  	}
  	
}

void* consumer(void *dummy) {
       	
  	int index = 0;
  	while(1) {  
		//check if the buffer is not empty
		if(!check_empty(index)) { 
    			pthread_mutex_lock(&mutex);	

			//if buffer is empty signal
    			while(buffer[index].value == 0){
      				pthread_cond_wait(&consumer_condition, &mutex);
    			}

    			pthread_mutex_unlock(&mutex);	
			sleep(buffer[index].wait_time);
		
    			printf("Consumer consumed: %i on index[%i/32] and now will sleep for %i seconds\n", buffer[index].value, index, buffer[index].wait_time);
		
		
    			pthread_mutex_lock(&mutex);	
    			buffer[index].value = 1;
    			buffer[index].wait_time = 1;
		
			//if index is still not at 32 keep increasing
    			if(index != 32){
      				index += 1;
    			}
    			else 
      			index = 0;
			
   			pthread_cond_signal(&producer_condition);
    			pthread_mutex_unlock(&mutex);

  		}
		
	}
 
}

int main(int argc, char **argv) {
  	
	pthread_t prod, cons;
  	init_genrand(1);

  	for (int i = 0; i < 32; i++) {		
    		buffer[i].value = 0;
    		buffer[i].wait_time = 0;
  	}

  	pthread_mutex_init(&mutex, NULL);	
  	pthread_cond_init(&consumer_condition, NULL);		
  	pthread_cond_init(&producer_condition, NULL);

  	pthread_create(&cons, NULL, consumer, NULL);
  	pthread_create(&prod, NULL, producer, NULL);

  	pthread_join(cons, NULL);
  	pthread_join(prod, NULL);

  	pthread_mutex_destroy(&mutex);	
  	pthread_cond_destroy(&consumer_condition);		
  	pthread_cond_destroy(&producer_condition);		

} 

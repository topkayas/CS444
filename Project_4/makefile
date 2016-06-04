CC = gcc
CFLAGS = -Wall -Wshadow -Wunreachable-code -Wredundant-decls -Wmissing-declarations -Wold-style-definition -Wmissing-prototypes -Wdeclaration-after-statement -g -std=c99

TARGET = homework4

#homework1: homework2.o
#	$(CC) homework2.c -o homework2 -pthread -lpthread -std=c99

#homework1.o:
#	$(CC) -c  homework1.c $(CFLAGS) 

default: all

clean:
	rm -rf *.o homework4 *~ *.aux *.log *.out *.pyg *.blg *.bbl *.dvi *.ps *.pdf
all: 
		
	latex homework4.tex	
	dvips -R -Poutline -t letter homework4.dvi -o homework4.ps
	ps2pdf homework4.ps
	rm homework4.aux
	rm homework4.dvi
	rm homework4.log
	rm homework4.ps
	rm homework4.out






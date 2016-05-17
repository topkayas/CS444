CC = gcc
CFLAGS = -Wall -Wshadow -Wunreachable-code -Wredundant-decls -Wmissing-declarations -Wold-style-definition -Wmissing-prototypes -Wdeclaration-after-statement -g -std=c99

TARGET = homework3

#homework1: homework2.o
#	$(CC) homework2.c -o homework2 -pthread -lpthread -std=c99

#homework1.o:
#	$(CC) -c  homework1.c $(CFLAGS) 

default: all

clean:
	rm -rf *.o homework3 *~ *.aux *.log *.out *.pyg *.blg *.bbl *.dvi *.ps *.pdf
all: 
		
	latex homework3.tex	
	dvips -R -Poutline -t letter homework3.dvi -o homework3.ps
	ps2pdf homework3.ps
	rm homework3.aux
	rm homework3.dvi
	rm homework3.log
	rm homework3.ps
	rm homework3.out






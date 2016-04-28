CC = gcc
CFLAGS = -Wall -Wshadow -Wunreachable-code -Wredundant-decls -Wmissing-declarations -Wold-style-definition -Wmissing-prototypes -Wdeclaration-after-statement -g -std=c99

TARGET = homework2

#homework1: homework2.o
#	$(CC) homework2.c -o homework2 -pthread -lpthread -std=c99

#homework1.o:
#	$(CC) -c  homework1.c $(CFLAGS) 

default: all

clean:
	rm -rf *.o homework1 *~ *.aux *.log *.out *.pyg *.blg *.bbl *.dvi *.ps *.pdf
all: 
		
	latex homework2.tex	
	dvips -R -Poutline -t letter homework2.dvi -o homework2.ps
	ps2pdf homework2.ps
	rm homework2.aux
	rm homework2.dvi
	rm homework2.log
	rm homework2.ps
	rm homework2.out






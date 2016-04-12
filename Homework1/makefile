CC = gcc
CFLAGS = -Wall -Wshadow -Wunreachable-code -Wredundant-decls -Wmissing-declarations -Wold-style-definition -Wmissing-prototypes -Wdeclaration-after-statement -g -std=c99

TARGET = homework1

homework1: homework1.o
	$(CC) homework1.c -o homework1 -pthread -lpthread -std=c99

homework1.o:
	$(CC) -c  homework1.c $(CFLAGS) 

clean:
	rm -rf *.o homework1 *~ *.aux *.log *.out *.pyg *.blg *.bbl *.dvi *.ps *.pdf
all: 
		
	latex homework1.tex	
	dvips -R -Poutline -t letter homework1.dvi -o homework1.ps
	ps2pdf homework1.ps
	rm homework1.aux
	rm homework1.dvi
	rm homework1.log
	rm homework1.ps
	rm homework1.out






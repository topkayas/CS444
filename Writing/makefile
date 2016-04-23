CC = gcc
CFLAGS = -Wall -Wshadow -Wunreachable-code -Wredundant-decls -Wmissing-declarations -Wold-style-definition -Wmissing-prototypes -Wdeclaration-after-statement -g 

TARGET = writing1 writing1.bib

#homework2: homework2.o
#	$(CC) homework2.c -o homework2 -pthread

#homework2.o:
#	$(CC) -c  homework2.c $(CFLAGS) 

default: all

clean:
	rm -rf *.o  *~ *.aux *.log *.out *.pyg *.blg *.bbl *.dvi *.ps *.pdf

#default: all

all: 
		
	latex writing1.tex writing1.bib.tex
#	dvips -R -Poutline -t letter writing1.bib.dvi -o writing1.bib.ps	
	dvips -R -Poutline -t letter writing1.dvi -o writing1.ps
	ps2pdf writing1.ps
#	ps2pds writing1.bib..ps
	rm writing1.aux
	rm writing1.dvi
	rm writing1.log
	rm writing1.ps
	rm writing1.out






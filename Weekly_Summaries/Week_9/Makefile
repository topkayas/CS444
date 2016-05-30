TEX	= latex -shell-escape
BIBTEX	= bibtex
DVIPS	= dvips
DVIPDF  = dvipdft
XDVI	= xdvi -gamma 4
GH		= gv

TARGET = summary_9

default: all 

all: 
	latex summary_9.tex
	dvips -R -Poutline -t letter summary_9.dvi -o summary_9.ps
	ps2pdf summary_9.ps
	rm summary_9.aux
	rm summary_9.dvi
	rm summary_9.log
	rm summary_9.ps
	rm summary_9.out

clean:
	rm -f *.pdf *.ps *.dvi *.out *.log *.aux *.bbl *.blg *.pyg

.PHONY: all show clean ps pdf showps

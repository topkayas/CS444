TEX	= latex -shell-escape
BIBTEX	= bibtex
DVIPS	= dvips
DVIPDF  = dvipdft
XDVI	= xdvi -gamma 4
GH		= gv

TARGET = summary_8

default: all 

all: 
	latex summary_8.tex
	dvips -R -Poutline -t letter summary_8.dvi -o summary_8.ps
	ps2pdf summary_8.ps
	rm summary_8.aux
	rm summary_8.dvi
	rm summary_8.log
	rm summary_8.ps
	rm summary_8.out

clean:
	rm -f *.pdf *.ps *.dvi *.out *.log *.aux *.bbl *.blg *.pyg

.PHONY: all show clean ps pdf showps

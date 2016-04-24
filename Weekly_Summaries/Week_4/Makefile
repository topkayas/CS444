TEX	= latex -shell-escape
BIBTEX	= bibtex
DVIPS	= dvips
DVIPDF  = dvipdft
XDVI	= xdvi -gamma 4
GH		= gv

TARGET = summary_4

default: all 

all: 
	latex summary_4.tex
	dvips -R -Poutline -t letter summary_4.dvi -o summary_4.ps
	ps2pdf summary_4.ps
	rm summary_4.aux
	rm summary_4.dvi
	rm summary_4.log
	rm summary_4.ps
	rm summary_4.out

clean:
	rm -f *.pdf *.ps *.dvi *.out *.log *.aux *.bbl *.blg *.pyg

.PHONY: all show clean ps pdf showps

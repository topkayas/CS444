TEX	= latex -shell-escape
BIBTEX	= bibtex
DVIPS	= dvips
DVIPDF  = dvipdft
XDVI	= xdvi -gamma 4
GH		= gv

TARGET = summary_3

default: all 

all: 
	latex summary_3.tex
	dvips -R -Poutline -t letter summary_3.dvi -o summary_3.ps
	ps2pdf summary_3.ps
	rm summary_3.aux
	rm summary_3.dvi
	rm summary_3.log
	rm summary_3.ps
	rm summary_3.out

clean:
	rm -f *.pdf *.ps *.dvi *.out *.log *.aux *.bbl *.blg *.pyg

.PHONY: all show clean ps pdf showps

TEX	= latex -shell-escape
BIBTEX	= bibtex
DVIPS	= dvips
DVIPDF  = dvipdft
XDVI	= xdvi -gamma 4
GH		= gv

TARGET = summary_7

default: all 

all: 
	latex summary_7.tex
	dvips -R -Poutline -t letter summary_7.dvi -o summary_7.ps
	ps2pdf summary_7.ps
	rm summary_7.aux
	rm summary_7.dvi
	rm summary_7.log
	rm summary_7.ps
	rm summary_7.out

clean:
	rm -f *.pdf *.ps *.dvi *.out *.log *.aux *.bbl *.blg *.pyg

.PHONY: all show clean ps pdf showps

TEX	= latex -shell-escape
BIBTEX	= bibtex
DVIPS	= dvips
DVIPDF  = dvipdft
XDVI	= xdvi -gamma 4
GH		= gv

TARGET = summary_5

default: all 

all: 
	latex summary_5.tex
	dvips -R -Poutline -t letter summary_5.dvi -o summary_5.ps
	ps2pdf summary_5.ps
	rm summary_5.aux
	rm summary_5.dvi
	rm summary_5.log
	rm summary_5.ps
	rm summary_5.out

clean:
	rm -f *.pdf *.ps *.dvi *.out *.log *.aux *.bbl *.blg *.pyg

.PHONY: all show clean ps pdf showps

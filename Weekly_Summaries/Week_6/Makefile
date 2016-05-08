TEX	= latex -shell-escape
BIBTEX	= bibtex
DVIPS	= dvips
DVIPDF  = dvipdft
XDVI	= xdvi -gamma 4
GH		= gv

TARGET = summary_6

default: all 

all: 
	latex summary_6.tex
	dvips -R -Poutline -t letter summary_6.dvi -o summary_6.ps
	ps2pdf summary_6.ps
	rm summary_6.aux
	rm summary_6.dvi
	rm summary_6.log
	rm summary_6.ps
	rm summary_6.out

clean:
	rm -f *.pdf *.ps *.dvi *.out *.log *.aux *.bbl *.blg *.pyg

.PHONY: all show clean ps pdf showps

TEX	= latex -shell-escape
BIBTEX	= bibtex
DVIPS	= dvips
DVIPDF  = dvipdft
XDVI	= xdvi -gamma 4
GH		= gv

TARGET = summary_1



all: 
	latex summary_1.tex
	dvips -R -Poutline -t letter summary_1.dvi -o summary_1.ps
	ps2pdf summary_1.ps
	rm summary_1.aux
	rm summary_1.dvi
	rm summary_1.log
	rm summary_1.ps
	rm summary_1.out

clean:
	rm -f *.pdf *.ps *.dvi *.out *.log *.aux *.bbl *.blg *.pyg

.PHONY: all show clean ps pdf showps

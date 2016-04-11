TEX	= latex -shell-escape
BIBTEX	= bibtex
DVIPS	= dvips
DVIPDF  = dvipdft
XDVI	= xdvi -gamma 4
GH		= gv

TARGET = summary_2



all: 
	latex summary_2.tex
	dvips -R -Poutline -t letter summary_2.dvi -o summary_2.ps
	ps2pdf summary_2.ps
	rm summary_2.aux
	rm summary_2.dvi
	rm summary_2.log
	rm summary_2.ps
	rm summary_2.out

clean:
	rm -f *.pdf *.ps *.dvi *.out *.log *.aux *.bbl *.blg *.pyg

.PHONY: all show clean ps pdf showps

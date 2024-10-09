#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "my_util.h"


void write_header(FILE *fp)
{
    fprintf(fp, "\\documentclass{exam}");
    fprintf(fp, "\n\\usepackage[utf8]{inputenc}");

    /*
    begin{document}

    section*{ECE 370: Advanced Computing in ECE}
    subsection*{Quiz \#1: The Quadratic Equation}
    today

    vspace{10mm}
    makebox[\textwidth]{Name:\enspace\hrulefill}
    vspace{3mm}

    begin{questions}

    question Solve for the roots: \(x^2 + 4x + 3 = 0\)
    subsection*{Discriminant}
    [d = {4^2 - 4\cdot 1 \cdot 3} = 16 - 12 = 4 \]
    subsection*{\(d > 0\): Real Roots}
    [x_1 = -\frac{3}{2} + \frac{\sqrt{4}}{2} = -1.5 + 1 = -0.5\]
    [x_2 = -\frac{3}{2} - \frac{\sqrt{4}}{2} = -1.5 - 1 = -2.5\]
    vspace{\stretch{1}}

    */

}



int main()
{

    srand(time(NULL));


    FILE *fp, *fp1;
    fp = fopen("student_latex.tex", "w");
    fp1 = fopen("teacher_latex.tex", "w");

    write_header(fp);

    int min = -6;
    int max = 6;

    int sigma = min +rand() % (max - min +1);

    min = 1;
    int w =  min +rand() % (max - min +1);

    if (rand() % 2 == 0)
        w = -1;

   int a = 1;
   int b = -2 * sigma;
   int c = sigma * sigma + w + w;
    printf("\n\n");
    return 0;
}

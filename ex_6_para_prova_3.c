#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main()
{
    int qtd = 14;
    //scanf("%d", &qtd);
    double  *vetor;

    vetor = (double*)calloc(qtd, sizeof(double));
    int i;
    for(i = 0; i < 10; i++)
    {
        vetor[i] = rand()%101;
        printf("%.1lf\n", vetor[i]);
    }
    free(vetor);
}
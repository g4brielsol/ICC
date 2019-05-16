#include <stdio.h>

void main()
{
    int *M;
    int n;

    scanf("%d ", &n);
    M = (int *)malloc(n*sizeof(int));
    
    for (int i=0; i < n; i++)
    {
        M[i] = rand()%20; // numero de 0 a 19
        printf("%d \n", M[i]);        
    }

    int i, j;    
    for(i=0; i < n; i++)
    {
        for (j= i + 1; j < n; j++)
        {
            ordena_vetor(&M[i], &M[j]);
        }
    }
}

ordena_vetor(int *um, int *dois)
{
    int troca;
    if(*um > *dois)
    {
        troca = *um;
        *um = *dois;
        *dois = troca;
    }
}
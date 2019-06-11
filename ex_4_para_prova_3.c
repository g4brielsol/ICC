#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int comparar(int *numero, int *comparacao, int *chute_anterior)
{
    if(*numero == *chute_anterior)
    {
        printf("%d", *chute_anterior);
        return 0;
    }

    else if(*numero > *chute_anterior)
    {
        *comparacao /= 2; 
        *chute_anterior += *comparacao;
        return (*chute_anterior);
    }
    else if(*numero < *chute_anterior)
    {
        *comparacao /= 2; 
        *chute_anterior -= *comparacao;
        return (*chute_anterior);
    }
}

void main()
{
    int numero, chute, chute_anterior = 8;
    numero = 15;
    chute = 8;
    chute_anterior = comparar(&numero, &chute, &chute_anterior);
    chute_anterior = comparar(&numero, &chute, &chute_anterior);
    chute_anterior = comparar(&numero, &chute, &chute_anterior);
    comparar(&numero, &chute, &chute_anterior);
}
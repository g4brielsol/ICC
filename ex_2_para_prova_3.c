#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main()
{
    int **n, i;
    n = (int**)calloc(20,sizeof(int*));
    
    for(i = 0; i < 20; i++)
    {
        n[i] = (int*)calloc(10, sizeof(int));
    }

    int j, par = 0, posicao_coluna_par, posicao_linha_par;
    for(i=0; i < 20; i++)
    {
        for(j=0; j < 10; j++)
        {
            n[i][j] = rand()%30;
            
            if(n[i][j] % 2 == 0)
            {
                par += 1;
            }
        }
    }
    for(i=0; i < 20; i++)
    {
        for(j=1; j < 10; j++)
        {
            if(n[i][j] % 2 == 0)
            {
                if(n[i][j] < n[i][j - 1])
                {
                    posicao_linha_par = i;
                    posicao_coluna_par = j - 1;
                }
            }
        }
    }

    printf("qtd de pares: %d\n", par);
    printf("posicao linha par: %d\n", posicao_linha_par);
    printf("posicao coluna par: %d", posicao_coluna_par);

    for(i = 0; i < 20; i++)
    {
        free(n[i]);
    }
    free(n);
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b, c, primeiro, segundo, terceiro;
    scanf("%d %d %d", &a, &b, &c);
    
    if (a <= b) 
    {
        if (a <= c)
         {
            primeiro = a;
            if (b <= c)
            {
                terceiro = c;
                segundo = b;
            }
            else
            {
                terceiro = b;
                segundo = c;
            }
        }
        else
        {
            primeiro = c;
            segundo = a;
            terceiro = b;
        }
    }
    else
    {
        if (b <= c)
        {
            primeiro = b;
            if (c <= a)
            {
                segundo = c;
                terceiro = a;
            }
            else
            {
                segundo = a;
                terceiro = c;
            }
        }
        else
        {
            terceiro = a;
            segundo = b;
            primeiro = c;
        }
    }
    printf("%d\n", primeiro);
    printf("%d\n", segundo);
    printf("%d\n", terceiro);
    
    
    
    return 0;
}
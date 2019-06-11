#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main()
{
    int data[12] = {4, 4, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8};
    int numItems = 12, count = 0, i;

    for(i=1; i <= numItems - 1; i++)
    {
        if(data[i] == data[i - 1])
        {
            count += 1;
        }
    }

    printf("%d", count);
}
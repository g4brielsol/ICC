#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, c, d, e;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    
    if(a == 1 || b == 1){
        if (c == 1 && d ==1){
            if(e == 1){
                printf("AVALIADO");
            }
            else{
                printf("%d",0);
                }
        }
        else{
            printf("%d", 0);
            }
        
    }
    else{
        printf("%d", 0);
    }
	return 0;
}
#include <stdio.h>

void adjust_point(int *n);

void main(){
    int *n;
    int a;
    printf("input n : ");
    scanf("%d", &a);
    n = &a;
    adjust_point(n);
    printf("n = %d\n", *n);
}

void adjust_point(int *n){
    if(*n < 0){
        *n = 0;    
    } else if(*n > 100){
        *n = 100;
    }
}
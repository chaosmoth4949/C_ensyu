#include <stdio.h>

int fib(long int n);

void main(){
    long int n;
    scanf("%ld",&n);
    printf("%ld\n", fib(n));
}

int fib(long int n){
    return (n == 1 || n == 2) ? 1 : (fib(n-1) + fib(n-2)) ;
}


#include <stdio.h>

int main() {
    printf("input two members!\n");
    int a,b;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d",&b);
    printf("a + b = %d, a * b = %d\n", a+b, a*b);
}
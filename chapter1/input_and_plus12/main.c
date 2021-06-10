#include <stdio.h>

int main() {
    printf("input integer: ");
    int a;
    scanf("%d", &a);
    int b = a + 12;
    printf("%d + 12 = %d\n", a, b);
}
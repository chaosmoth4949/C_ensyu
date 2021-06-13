#include <stdio.h>
#include <math.h>

int main() {
    double r,S; // 半径,円の面積
    printf("r: ");
    scanf("%lf", &r);
    S = r * r * M_PI; 
    printf("S: %lf\n", S); // 少数第六位まで表示
}
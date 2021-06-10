#include <stdio.h>
#include <math.h>

int main() {
    float r,S; // 半径,円の面積
    printf("r: ");
    scanf("%f", &r);
    S = r * r * M_PI; 
    printf("S: %f\n", S); // 少数第六位まで表示
}
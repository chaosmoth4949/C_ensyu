#include <stdio.h>

double glo[5]; // 静的記憶域期間を確認するためのグローバル変数

void printDoubleArray(double v[], int n);
void generateStaticArg(){
    static double sta[5];
}
// static 修飾子つき関数の静的記憶域期間を確認するための変数
// void all_plusOne(double v[], int n); // 配列の全ての要素に1をたす


int main(){
    int n_glo = sizeof(glo) / sizeof(glo[0]);
    printf("global arg : ");
    printDoubleArray(glo, n_glo);
    generateStaticArg();
}

void printDoubleArray(double v[], int n){
    for(int i = 0; i < n; i++){
        printf("%lf",v[i]);
        if(i != n-1) {
            printf(", ");
        }
    }
    printf("\n");
}
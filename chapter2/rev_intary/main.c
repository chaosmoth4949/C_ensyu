#include <stdio.h>

void rev_intary(int v[], int n);
void printArray(int v[], int n);

void main(){
    int v[5] = {1, 2, 3, 4, 5};
    int n = sizeof(v) / sizeof(v[0]);
    printf("before : ");
    printArray(v, n);
    rev_intary(v, n);
    printf("After : ");
    printArray(v, n);
}

void rev_intary(int v[], int n){
    int v2[5]; // 変更前のvの要素を保持する配列

    for(int i = 0; i < n; i++){
        v2[i] = v[i];
    }

    for(int i = 0; i < n; i++){
        v[i] = v2[n - 1 - i];
    }
}

void printArray(int v[], int n){
    for(int i = 0; i < n; i++){
        printf("%d",v[i]);
        if(i != n-1) {
            printf(", ");
        }
    }
    printf("\n");
}
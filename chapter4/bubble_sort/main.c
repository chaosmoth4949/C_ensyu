#include <stdio.h>
#define N 5

void bubble_sort(int v[]);
void printArray(int v[], int n);

void main(){
    int v[N];
    printf("input array(N = %d) : ", N);
    for(int i = 0; i < N; i++){
        scanf("%d", &v[i]);
    }
    printf("before : ");
    printArray(v, N);
    bubble_sort(v);
}

void bubble_sort(int v[]){
    int a = 0;
    for(int j = 0; j < N; j++){
        for(int i = 0; i < N - j; i++){
            if(v[i] > v[i + 1]){
                a = v[i];
                v[i] = v[i + 1];
                v[i + 1] = a;
            }
        }
    }
    printf("after : ");
    printArray(v, N);
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
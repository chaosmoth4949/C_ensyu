#include <stdio.h>
#define ARRAY_SIZE 5

void set_idx(int *v, int n);
void printArray(int *v, int n);

void main(){
    int a[ARRAY_SIZE];
    int *v;
    printf("input array(size : %d) : ", ARRAY_SIZE);
    scanf("%d", &a); 
    v = &a[0];
    set_idx(v, sizeof(a) / sizeof(a[0]));
    printf("after : ");
    printArray(v, sizeof(a) / sizeof(a[0]));
}

void set_idx(int *v, int n){
    for(int i = 0; i < n; i++){
        v[i] = i;
    }
}

void printArray(int *v, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    puts("");
}

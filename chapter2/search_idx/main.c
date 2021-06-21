#include <stdio.h>

int searchr(const int v[], int key, int n);
void printArray(int v[], int n);

int main(){
    int v[5] = {11, 13, 17, 19, 13};
    int key = 13;
    int n = sizeof(v) / sizeof(v[0]);
    int index = searchr(v, key, n);
    printArray(v, n);
    printf("%d の添字は %d(-1 の場合、key に一致する要素なし)\n", key, index);
}

int searchr(const int v[], int key, int n){
    int index = -1;
    for(int i = 0; i < n; i++){
        if(v[i] == key){
            index = i;
        }
    }
    return index;
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
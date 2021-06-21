#include <stdio.h>

void mat_mul(const int a[4][3], const int b[3][4], int c[4][4]);
int getMatElement(const int a[4][3], const int b[3][4], int line, int row);
void printMat(const int c[4][4]);

void main(){
    int a[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int b[3][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
    int c[4][4];
    mat_mul(a, b, c);
    printMat(c);
}

void mat_mul(const int a[4][3], const int b[3][4], int c[4][4]){ 
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; i++){
            c[i][j] = getMatElement(a ,b , i, j);
        }
    }
}

int getMatElement(const int a[4][3], const int b[3][4], int line, int row){
    int sum = 0;
    for(int k = 0; k < 3; k++){
        sum += a[line][k] * b[k][row];
    }
    return sum;
}

void printMat(const int c[4][4]){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
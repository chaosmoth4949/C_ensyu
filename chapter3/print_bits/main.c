#include <stdio.h>

void print_bits(unsigned int x);
void printArray(int unsigned v[], int n);
int getNumbersOfBits(unsigned int x);
int exponentiation(int value, int n);

void main(){
    unsigned int x;
    printf("input x : ");
    scanf("%u", &x);
    print_bits(x);
}

void print_bits(unsigned int x){
    unsigned int origin_x = x;
    int n_bits = getNumbersOfBits(x);
    int j = 0;
    unsigned int bits[n_bits];

    for(int i = n_bits; i > 0; i--){
        if(x >= exponentiation(2, i - 1)){
            bits[j] = 1;
            x -= exponentiation(2, i - 1);
        } else {
            bits[j] = 0;
        }
        j++;
    }
    printf("%u の内部ビットは ", origin_x);
    printArray(bits, j);
}

int getNumbersOfBits(unsigned int x){
    int counter = 1;
    for(int i = 1; i <= 16; i++){
        if(x >= exponentiation(2, i)){
            counter ++;
        } else {
            break;
        }
    }
    return counter;
}

int exponentiation(int value, int n){
    if(n == 0){
        return 1;
    } else if(n == 1){
        return value;
    }

    int origin_v = value;
    
    for(int i = 0; i < n-1; i++){
        value *= origin_v;
    }
    return value;
}

void printArray(int unsigned v[], int n){
    for(int i = 0; i < n; i++){
        printf("%u",v[i]);
    }
    printf("\n");
}
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
    printf("n_bit : %d\n",n_bits);
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
    printArray(bits, j + 1);
}

int getNumbersOfBits(unsigned int x){
    int counter = 1;
    if(x <= 1) {
        return 1;
    } else {
        for(int i = 1; i <= 16; i++){
            if(x >= exponentiation(2, i)){
                counter ++;
            } else {
                break;
            }
        }
    }   
    printf("number of bits : %d\n", counter);
    return counter;
}

int exponentiation(int value, int n){
    int origin_v = value;
   
    for(int i = 0; i < n-1; i++){
        value *= origin_v;
        printf("value = %d\n",value);
    }
    return value;
}

void printArray(int unsigned v[], int n){
    for(int i = 0; i < n; i++){
        printf("%u",v[i]);
    }
    printf("\n");
}
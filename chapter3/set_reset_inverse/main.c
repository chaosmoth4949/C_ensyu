#include <stdio.h>

unsigned set(unsigned x, int pos);
unsigned reset(unsigned x, int pos);
unsigned inverse(unsigned x, int pos);
int* decimal_to_binary(unsigned x); 
unsigned binary_to_decimal(int* p, int n_bits);
int getNumbersOfBits(unsigned x);
int exponentiation(int value, int n);

void main(){
    unsigned int x, pos;
    printf("input x : ");
    scanf("%u", &x);
    printf("input pos : ");
    scanf("%u", &pos);
    printf("set : %u , reset : %u , inverse : %u\n", set(x, pos), reset(x, pos), inverse(x, pos));
}

unsigned set(unsigned x, int pos){
    int* p;
    p = decimal_to_binary(x);
    int n_bits = getNumbersOfBits(x);
    p[n_bits - pos] = 1;
    unsigned result = binary_to_decimal(p, n_bits);
    return result;
}

unsigned reset(unsigned x, int pos){
    int* p;
    p = decimal_to_binary(x);
    int n_bits = getNumbersOfBits(x);
    p[n_bits - pos] = 0;
    unsigned result = binary_to_decimal(p, n_bits);
    return result;
}

unsigned inverse(unsigned x, int pos){
    int* p;
    p = decimal_to_binary(x);
    int n_bits = getNumbersOfBits(x);
    if(p[n_bits - pos] == 0){
        p[n_bits - pos] = 1;
    } else {
        p[n_bits - pos] = 0;
    }
    unsigned result = binary_to_decimal(p, n_bits);
    return result;
}

unsigned binary_to_decimal(int* p, int n_bits){
    unsigned sum = 0;

    for(int i = 0;i < n_bits; i++){
        sum += p[i] * exponentiation(2, n_bits - i - 1);
    }
    return sum;
}

int* decimal_to_binary(unsigned x){
    unsigned origin_x = x;
    int n_bits = getNumbersOfBits(x);
    int j = 0;
    unsigned binary[n_bits];
    int* p;
    p = &binary[0];

    for(int i = n_bits; i > 0; i--){
        if(x >= exponentiation(2, i - 1)){
            binary[j] = 1;
            x -= exponentiation(2, i - 1);
        } else {
            binary[j] = 0;
        }
        j ++;
    }
    return p;
}

int getNumbersOfBits(unsigned x){
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
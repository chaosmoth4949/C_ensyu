#include <stdio.h>

unsigned set_n(unsigned x, int pos, int n);
unsigned reset_n(unsigned x, int pos, int n);
unsigned inverse_n(unsigned x, int pos, int n);
int* decimal_to_binary(unsigned x); 
unsigned binary_to_decimal(int* p, int n_bits);
int getNumbersOfBits(unsigned x);
int exponentiation(int value, int n);

void main(){
    unsigned int x;
    int pos, n;
    printf("input x : ");
    scanf("%u", &x);
    printf("input pos : ");
    scanf("%d", &pos);
    printf("input n : ");
    scanf("%d", &n);
    printf("set_n : %u , reset_n : %u , inverse_n : %u\n", set_n(x, pos, n), reset_n(x, pos, n), inverse_n(x, pos, n));
}

unsigned set_n(unsigned x, int pos, int n){
    int* p;
    p = decimal_to_binary(x);
    int n_bits = getNumbersOfBits(x);
    for(int i = n_bits - pos; i > n_bits - (pos + n - 1) ; i--){
        p[i] = 1;
    }
    puts("bits : ");
    for(int k = 0;k<n_bits;k++){
        printf("%u",p[k]);
    }
    unsigned result = binary_to_decimal(p, n_bits);
    return result;
}

unsigned reset_n(unsigned x, int pos, int n){
    int* p;
    p = decimal_to_binary(x);
    int n_bits = getNumbersOfBits(x);

    for(int i = n_bits - pos; i > n_bits - (pos + n - 1); i--){
        p[i] = 0;
    }
    for(int k = 0;k<n_bits;k++){
        printf("%u",p[k]);
    }
    puts("bits : ");
    unsigned result = binary_to_decimal(p, n_bits);
    return result;
}

unsigned inverse_n(unsigned x, int pos, int n){
    int* p;
    p = decimal_to_binary(x);
    int n_bits = getNumbersOfBits(x);

    for(int i = n_bits - pos; i > n_bits - (pos + n - 1); i--){
        printf("done, p[i]=%u\n",p[i]);
        if(p[i] == 0){
            p[i] = 1;
        } else if(p[i] == 1){
            p[i] = 0;
        }
    }
    for(int k = 0;k<n_bits;k++){
        printf("%u",p[k]);
    }
    puts("bits : ");

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
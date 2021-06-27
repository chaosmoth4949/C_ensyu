#include <stdio.h>
#define MAX_len 32

/*
a | b : ビット列の論理和
a || b : boolean の論理和

a^n 
*/

unsigned set_n(unsigned x, int pos, int n);
unsigned reset_n(unsigned x, int pos, int n);
unsigned inverse_n(unsigned x, int pos, int n);
void print_bits(unsigned int x);

// int* decimal_to_binary(unsigned x); 
// unsigned binary_to_decimal(int* p, int n_bits);
// int getNumbersOfBits(unsigned x);
// int exponentiation(int value, int n);

void main(){
    unsigned int x;
    int pos, n;
    printf("input x : ");
    scanf("%u", &x);
    printf("input pos : ");
    scanf("%d", &pos);
    printf("input n : ");
    scanf("%d", &n);
    printf("origin : ");
    print_bits(x);
    printf("set_n   %u : ", set_n(x, pos, n));
    print_bits(set_n(x, pos, n));
    printf("reset_n   %u : ", reset_n(x, pos, n));
    print_bits(reset_n(x, pos, n));
    printf("inverse_n   %u : ", inverse_n(x, pos, n));
    print_bits(inverse_n(x, pos, n));
}

unsigned set_n(unsigned x, int pos, int n){
    for(int i = pos; i < pos + n ;i++){
        x = x | 1 << (i - 1);
    }
    return x;
}

unsigned reset_n(unsigned x, int pos, int n){
    for(int i = pos; i < pos + n ;i++){
        x = x & ~(1 << i - 1);
    }
    return x;
}

unsigned inverse_n(unsigned x, int pos, int n){
    for(int i = pos; i < pos + n ;i++){
        x = x ^ 1 << (i - 1);
    }
    return x;
}

/* 
set_n 別解(O(1)でできる)
x = x | ~(~0 << n) << pos;
1: ~0
2: ~0 << n
3: ~(~0 << n)
4: ~(~0 << n) << pos
*/


void print_bits(unsigned int x){
    unsigned int b[MAX_len];
    int flag = 0;
    int length;
    for(int i = MAX_len - 1; i >= 0; i--){
        if(x / (1 << i) == 1){
            if(flag == 0){
                flag = 1;
            }
            b[MAX_len - i] = 1;
            x = x % (1 << i);
        } else {
            b[MAX_len - i] = 0;
        }
        if(flag == 1){
            printf("%d", b[MAX_len - i]);
        }
    }
    puts("");
}

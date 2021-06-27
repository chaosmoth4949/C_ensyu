#include <stdio.h>
#define MAX_len 32

void print_bits(unsigned int x);

void main(){
    unsigned int x;
    printf("input x : ");
    scanf("%u", &x);
    print_bits(x);
}

void print_bits(unsigned int x){
    unsigned int b[MAX_len];
    int flag = 0;
    int length;
    for(int i = MAX_len - 1; i > 0; i--){
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
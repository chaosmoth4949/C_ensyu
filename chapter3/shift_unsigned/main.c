#include <stdio.h>

unsigned exponentiation(int value, unsigned int n);

void main(){
    unsigned int value, n_shift ;
    printf("input value : ");
    scanf("%d", &value);
    printf("input numbers of shift : ");
    scanf("%d", &n_shift);

    printf("%d を %d ビット左シフトした値は %d 。\n", value, n_shift, value << n_shift);
    printf("%d を 2 の %d 乗で乗算した値は %d 。\n", value, n_shift, value * exponentiation(2, n_shift));
    printf("%d を %d ビット右シフトした値は %d 。\n", value, n_shift, value >> n_shift);
    printf("%d を 2 の %d 乗で除算した値は %d 。\n", value, n_shift, value / exponentiation(2, n_shift));
}

unsigned int exponentiation(int value, unsigned int n){
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
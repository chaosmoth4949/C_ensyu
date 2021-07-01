#include <stdio.h>

int gcd(int x, int y); // ユークリッドの互助法で最大公約数を求める

int main(){
    int x, y;
    printf("input x : ");
    scanf("%d", &x);
    printf("input y : ");
    scanf("%d", &y);
    printf("%d と %d の最大公約数は %d \n", x, y, gcd(x, y));
}

int gcd(int x, int y){
    if(y == 0){
        return x;
    } else {
        return gcd(y, x % y); // 最大公約数をリレー
    }
}
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
    int a = x % y;
    if(a == 0) return y; // 最大公約数を発見
    if(x < y) return 1;
    return gcd(y, a); // 最大公約数をリレー
}
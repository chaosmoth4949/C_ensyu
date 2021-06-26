#include <stdio.h>

int factorial(int x); // 階乗を求める(再起あり)
int factorial2(int x); // 階乗を求める(再起なし)

int main(){
    int x, f1, fa2;
    printf("input x : ");
    scanf("%d", &x);
    printf("再起あり : %d\n再起なし : %d\n",factorial(x), factorial2(x));
}

int factorial(int x){
    if(x == 1) return 1;
    return x * factorial(x - 1); // x! = x * (x - 1)!
}

int factorial2(int x){
    int origin_x = x;
    for(int i = 1; i < origin_x ; i++){
        x *= (origin_x - i); // x = x * (x - 1) * (x - 2) * ... * 1
    }
    return x;
}
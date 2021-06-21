#include <stdio.h>

void put_count();

int main(){
    int n;
    printf("実行回数 : ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){    
        put_count();
    }
}

void put_count(){
    static int times;
    printf("%d 回目の実行\n", ++times);
}
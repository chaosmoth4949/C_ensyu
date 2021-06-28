#include <stdio.h>

void rev_string(char s[]);

void main(){
    char s[20];
    printf("input s (string) : ");
    scanf("%s", &s);
    printf("入力した文字列の反転は : "); 
    rev_string(s);
}

void rev_string(char s[]){
    int l = (sizeof(s) / sizeof(s[0])) - 1; // 最後のヌル文字を除く
    for(int i = l ; i >= 0; i--){
        printf("%c", s[i]);
    }
    puts("");
}
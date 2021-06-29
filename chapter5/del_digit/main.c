#include <stdio.h>
#define MAX_SIZE 20

void del_digit(char s[]);

void main(){
    char s[MAX_SIZE];
    printf("input s (max : %d letters) : ", MAX_SIZE);
    scanf("%s", &s);
    del_digit(s); 
    printf("入力した文字列から数字文字を除いたものは : %s\n", s);  
}

void del_digit(char s[]){
    for(int i = 0 ; i < (sizeof(s) / sizeof(s[0]) - 1); i++){
        if('0' <= s[i] && s[i] <= '9') s[i] = '\0';
    }
    puts("");
}
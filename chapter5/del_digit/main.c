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
    int j = 0;
    for(int i = 0 ; s[i] != '\0'; i++){
        s[j] = s[i];
        if(s[i] < '0' || s[i] > '9') {
            j++;
        }
    }
    s[j] = '\0';
    puts("");
}
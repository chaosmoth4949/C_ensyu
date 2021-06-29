#include <stdio.h>

int str_char(const char s[], char c);

void main(){
    char s[20];
    char c;
    printf("input s (string) : ");
    scanf("%s", &s);
    printf("input c : ");
    scanf("%s", &c);
    printf("最初のcの添字は %d 。\n", str_char(s, c)); 
}

int str_char(const char s[], char c){
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == c) return i;
    }
    return -1;
}
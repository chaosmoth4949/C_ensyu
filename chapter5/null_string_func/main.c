#include <stdio.h>

void null_string_func(char s[]);

void main(){
    char s[20];
    printf("input string : ");
    scanf("%s", &s);
    null_string_func(s);
    printf("%s\n",s); 
}

void null_string_func(char s[]){
    s[0] = '\0';
}
#include <stdio.h>
#include <unistd.h>
#define MAX_SIZE 20

char *str_chr(const char *s, int c);

void main(){
    char s[MAX_SIZE];
    printf("input string(MAX : %d letters) : ", MAX_SIZE);
    scanf("%s", &s);

    fflush(stdin);

    char c;
    printf("input char : ");
    scanf("%c", &c);

    printf("文字列の中で %c を指すポインタは %p\n", c, *(str_chr(s, c)));
}

char *str_chr(const char *s, int c){
    char *empty;
    for(const char *p = s; *p; p++){
        if(*p == c) return p;
    }
    return empty;
}
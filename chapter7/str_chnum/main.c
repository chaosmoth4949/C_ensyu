#include <stdio.h>
#include <unistd.h>
#define MAX_SIZE 20

int str_chnum(const char *s, char c);

void main(){
    char a[MAX_SIZE];
    printf("input string(MAX : %d letters) : ", MAX_SIZE);
    scanf("%s", &a);

    fflush(stdin);

    char c;
    printf("input char : ");
    scanf("%c", &c);

    // printf("string : %s, char : %c", a, c);

    printf("文字列に含まれる %c の個数は %d\n", c, str_chnum(a, c));
}

int str_chnum(const char *s, char c){
    // printf("string : %s, char : %c", s, c);

    int n = 0;
    for(const char *a = s; *a; a++){
        if(*a == c) n++;
    }
    return n;
}
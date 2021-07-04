#include <stdio.h>
#define MAX_SIZE 20

void put_string(const char *s);

void main(){
    char s[MAX_SIZE];
    printf("input string(MAX : %d letters) : ", MAX_SIZE);
    scanf("%s", &s);
    put_string(s);
}

void put_string(const char *s){
    for(const char *p = s; *p; p++){
        printf("%c", *p);
    }
    puts("");
}
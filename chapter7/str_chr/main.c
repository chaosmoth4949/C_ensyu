#include <stdio.h>
#define MAX_SIZE 20

char *str_chr(const char *s, int c);

void main(){
    char c;
    printf("input char : ");
    scanf("%s", &c);
    char a[MAX_SIZE];
    printf("input string(MAX : %d letters) : ", MAX_SIZE);
    scanf("%s", &a);
    char *s = &a[0];
    printf("%c\n", *(str_chr(s, c)));
}

char *str_chr(const char *s, int c){
    char *empty;
    for(int i = 0; *(s + i) != '\0'; i++){
        if(*(s + i) == c) return s + i;
    }
    return empty;
}
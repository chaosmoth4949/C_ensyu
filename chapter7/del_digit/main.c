#include <stdio.h>
#define MAX_SIZE 20

void del_digit(char *str);

void main(){
    char s[MAX_SIZE];
    printf("input string(MAX : %d letters) : ", MAX_SIZE);
    scanf("%s", s);

    del_digit(s);

    printf("%s\n", s);
}

void del_digit(char *str){
    int j = 0;
    for(const char *p = str; *p; p++){
        *(str + j) = *p;
        if(*p < '0' || *p > '9') {
            j++;
        }
    }
    *(str + j) = '\0';
}
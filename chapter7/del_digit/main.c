#include <stdio.h>
#define MAX_SIZE 20

void del_digit(char *str);

void main(){
    char a[MAX_SIZE];
    printf("input string(MAX : %d letters) : ", MAX_SIZE);
    scanf("%s", &a);
    char *s = &a[0];
    del_digit(s);
    printf("%s\n", s);
}

void del_digit(char *str){
    int j = 0;
    for(int i = 0 ; *(str + i) != '\0'; i++){
        *(str + j) = *(str + i);
        if(*(str + i) < '0' || *(str + i) > '9') {
            j++;
        }
    }
    *(str + j) = '\0';
}
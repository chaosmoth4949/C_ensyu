#include <stdio.h>
#define MAX_SIZE 20

void put_string(const char *s);

void main(){
    char a[MAX_SIZE];
    printf("input string(MAX : %d letters) : ", MAX_SIZE);
    scanf("%s", &a);
    char *s = &a[0];
    printf("%s\n", s);
}

void put_string(const char *s){
    for(int i = 0; *(s + i) != '\0'; i++){
        printf("%c", *(s + i));
    }
    puts("");
}
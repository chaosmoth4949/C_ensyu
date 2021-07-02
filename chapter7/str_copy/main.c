#include <stdio.h>
#define MAX_SIZE 20

char *str_copy(char *d, const char *s);

void main(){
    char a[MAX_SIZE];
    printf("input string(MAX : %d letters) : ", MAX_SIZE);
    scanf("%s", &a);
    char *s = &a[0];
    char *d = s + MAX_SIZE + 1;
    printf("%s\n", str_copy(d, s));
}

char *str_copy(char *d, const char *s){
    for(int i = 0;*(s + i) != '\0'; i++){
        *(d + i) = *(s + i);
    }
    return d;
}
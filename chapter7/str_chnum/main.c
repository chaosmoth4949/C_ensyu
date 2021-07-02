#include <stdio.h>
#define MAX_SIZE 20

int str_chnum(const char *s, char c);

void main(){
    char c;
    printf("input char : ");
    scanf("%s", &c);
    char a[MAX_SIZE];
    printf("input string(MAX : %d letters) : ", MAX_SIZE);
    scanf("%s", &a);
    char *s = &a[0];
    printf("文字列に含まれる %c の個数は %d\n", c, str_chnum(s, c));
}

// 1文字目の判定が行われない
int str_chnum(const char *s, char c){
    int n = 0;
    for(int i = 0; *(s + i) != '\0'; i++){
        if(*(s + i) == c) n++;
    }
    return n;
}
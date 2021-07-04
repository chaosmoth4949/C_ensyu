#include <stdio.h>
#include <unistd.h>
#define MAX_SIZE 20

int str_ch(const char *s, char ch);

void main(){
    char s[MAX_SIZE];
    printf("input string(MAX : %d letters) : ", MAX_SIZE);
    scanf("%s", &s);

    fflush(stdin);

    char ch;
    printf("input ch : ");
    scanf("%c", &ch);
    printf("最初の %c の添字は %d\n", ch, str_ch(s, ch));
}

int str_ch(const char *s, char ch){
    for(const char *p = s; *p; p++){
        if(*p == ch){
            return (p - s);
        }
    }
    return -1;
}
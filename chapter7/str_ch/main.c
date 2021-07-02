#include <stdio.h>
#define MAX_SIZE 20

int str_ch(const char *s, char ch);

void main(){
    char a[MAX_SIZE];
    printf("input string(MAX : %d letters) : ", MAX_SIZE);
    scanf("%s", &a);
    char *s = &a[0];
    char ch;
    printf("input ch : ");
    scanf("%s", &ch);
    printf("最初の %c の添字は %d\n", ch, str_ch(s, ch));
}

int str_ch(const char *s, char ch){
    for(int i = 0; i < MAX_SIZE; i++){
        if(*(s + i) == ch){
            return i;
        }
    }
    return -1;
}
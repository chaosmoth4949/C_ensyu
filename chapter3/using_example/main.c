#include <stdio.h>

void main(){
    printf("int 型が記憶域上で占有するのは %d バイト\n", sizeof(int));
    printf("long 型が記憶域上で占有するのは %d バイト\n", sizeof(long));
    printf("short 型が記憶域上で占有するのは %d バイト\n", sizeof(short));
    printf("unsigned int 型が記憶域上で占有するのは %d バイト\n", sizeof(unsigned int));
    printf("unsigned long 型が記憶域上で占有するのは %d バイト\n", sizeof(unsigned long));
    printf("unsigned short 型が記憶域上で占有するのは %d バイト\n", sizeof(unsigned short));
    printf("char 型が記憶域上で占有するのは %d バイト\n", sizeof(char));
    printf("unsigned char 型が記憶域上で占有するのは %d バイト\n", sizeof(unsigned char));
}
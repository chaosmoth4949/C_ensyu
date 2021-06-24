#include <stdio.h>
#include <limits.h>

void main(){
    printf("int 型で表現できる数値は %d から %d  まで\n", INT_MIN, INT_MAX);
    printf("unsigned int 型で表現できる数値は 0 から %d  まで\n", UINT_MAX);
    printf("long 型で表現できる数値は %d から %d  まで\n", LONG_MIN, LONG_MAX);
    printf("unsigned long 型で表現できる数値は 0 から %d  まで\n", ULONG_MAX);
    printf("short 型で表現できる数値は %d から %d  まで\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short 型で表現できる数値は 0 から %d  まで\n", USHRT_MAX);
}
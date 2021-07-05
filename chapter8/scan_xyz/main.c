#include <stdio.h>
#include <unistd.h>

typedef struct xyz {
    int x;
    long y;
    double  z;
} XYZ;

XYZ scan_xyz();

// main関数内でオブジェクトを初期化
void main(){
    XYZ a = scan_xyz();

    printf(" x : %d\n y : %ld\n z : %lf\n",
    a.x, a.y, a.z);
}

XYZ scan_xyz(){
    XYZ a;
    printf("input x : ");
    scanf("%d", &a.x);
    fflush(stdin);

    printf("input y : ");
    scanf("%ld", &a.y);
    fflush(stdin);

    printf("input z : ");
    scanf("%lf", &a.z);
    fflush(stdin);

    return a;
}
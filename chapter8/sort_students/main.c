#include<stdio.h>
#include <unistd.h>

// 学生数と学生の名前の最大文字数を定義
#define NUMBER   5
#define NAME_LEN 64

// Student構造体
typedef struct {
    char  name[NAME_LEN];
    int   height;
    float weight;
    long  schols;
} Student;

void sort_by_height(Student a[], int n);

// Student構造体のソート
void main() {
    Student s[NUMBER];

    for(int i = 0; i < NUMBER; i++){
        printf("input student%d's name : ", i);
        scanf("%s", &s[i].name);
        fflush(stdin);

        printf("input student%d's height : ", i);
        scanf("%d", &s[i].height);
        fflush(stdin);

        printf("input student%d's weight : ", i);
        scanf("%f", &s[i].weight);
        fflush(stdin);
    }

    sort_by_height(s, NUMBER);

    printf("入力された生徒の情報を身長をキーにソートした結果は\n");
    for(int i = 0; i < NUMBER; i++){
        printf("%s, %d\n", s[i].name, s[i].height);
    }
}

void sort_by_height(Student a[], int n){
    if(n == 1) return;
    Student holder;

    for(int i = 0; i < n - 1; i++){
        if(a[i].height > a[i + 1].height){
            holder = a[i];
            a[i] = a[i + 1];
            a[i + 1] = holder;
        }
    }

    sort_by_height(a, n - 1);

    /*
    for(Student *p = &a[0]; p < p + n - 1; p++){
        if(p->height > (p + 1)->height){
            holder = p->height;
            p->height = (p + 1)->height;
            (p + 1)->height = holder;
        }
    }
    */
}
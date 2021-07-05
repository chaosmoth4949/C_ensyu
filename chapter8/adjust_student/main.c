#include <stdio.h>
#include <unistd.h>
#define NAME_LEN 64

typedef struct student {
    char  name[NAME_LEN];
    int   height;
    float weight;
    long  schols;
} Student;

void adjust_student(Student *s);

// main関数内でオブジェクトを初期化
void main(){
    Student s;

    printf("input student's name : ");
    scanf("%s", &s.name);
    fflush(stdin);

    printf("input student7s height : ");
    scanf("%d", &s.height);
    fflush(stdin);

    printf("input student's weight : ");
    scanf("%f", &s.weight);
    fflush(stdin);

    adjust_student(&s);
    
    printf(" name (value : %s, pointer : %p)\n height (value  %d, pointer %p)\n weight (value %f, pointer %p)\n",
    s.name, &s.name, s.height, &s.height, s.weight, &s.weight);
}

void adjust_student(Student *s){
    if(s->height < 180) s->height = 180;
    if(s->weight > 80.0) s->weight = 80.0;
}
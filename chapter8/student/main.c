#include <stdio.h>
#define NAME_LEN 64

struct student {
    char  name[NAME_LEN];
    int   height;
    float weight;
    long  schols;
};

// main関数内でオブジェクトを初期化
void main(){
    struct student takao = {
        "Takao", 173, 86.2
    };
    
    printf(" name (value : %s, pointer : %p)\n height (value  %d, pointer %p)\n weight (value %f, pointer %p)\n",
    takao.name, &takao.name, takao.height, &takao.height, takao.weight, &takao.weight);
}
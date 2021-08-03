#include <stdio.h>
#include <stdlib.h>

int  readfile(const char*, int**);
void outputarray(size_t, int[]);
void bubble_sort(size_t, int[]);
void insertion_sort(size_t, int[]);
void merge_sort(int[], int, int);
void swap(int[], int, int);

int main() {
    // read data from file
    const char* filename = "input.txt";
    int* array;
    int size = readfile(filename, &array);
    if (size == -1) {
        fprintf(stderr, "cannot input data from %s\n", filename);
        return 1;
    }

    // sort and output
    /*
    printf("<bubble_sort>\n");
    bubble_sort(size, array);
    
    printf("<insertion_sort>\n");
    insertion_sort(size, array);
    outputarray(size, array);
    */

    printf("<merge_sort>\n");
    merge_sort(array, 0, size - 1);
    outputarray(size, array);

    free(array);
    return 0;
}

int readfile(const char* filename, int** array) {
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        fprintf(stderr, "cannot file %s\n", filename);
        return -1;
    }

    int size;
    fscanf(fp, "%d", &size);
    
    *array = (int*)malloc(size * sizeof(int));
    if (array == NULL) {
        fprintf(stderr, "cannot allocate memory\n");
        return -1;
    }

    for (int i = 0; i < size; i++) {
        fscanf(fp, "%d", *array + i);
    }

    return size;
}

void outputarray(size_t size, int array[]) {
    for (size_t i = 0; i < size; i++) {
        printf("%d ", array[i]); 
    }
    printf("\n");
}

void bubble_sort(size_t size, int array[]) {
    int a;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(array[j] > array[j + 1]) {
                swap(array, j, j + 1);
            }
        }
    }
}

void insertion_sort(size_t size, int array[]){
    int a;
    for(int i = 1; i < size; i++){
        for(int j = i; j > 0; j--){
            if(array[j] < array[j - 1]) {
                swap(array, j, j - 1);
            } else break;
        }
    }
}

void merge_sort(int array[], int left, int right){
    int mid = (left + right) / 2;

    if(left >= right) return;

    merge_sort(array, left, mid);
    merge_sort(array, mid + 1, right);

    int tmp_l[mid - left + 1];
    int tmp_r[right - mid];

    for(int i = left; i <= right; i++){
        if(i <= mid){
            tmp_l[i - left] = array[i];
        } else {
            tmp_r[i - mid + 1] = array[i];
        }
    }

    int l_cnt = 0;
    int r_cnt = 0;

    for(int j = left; j <= right; j++){
        if(l_cnt >= mid - left + 1) {
            array[j] = tmp_r[r_cnt++];
        } else if(r_cnt >= right - mid){
            array[j] = tmp_l[l_cnt++];
        } else if(tmp_r[r_cnt] >= tmp_l[l_cnt]){
            array[j] = tmp_l[l_cnt++];
        } else {
            array[j] = tmp_r[r_cnt++];
        }
    }
    /*
    f(size > 1){
        for(int i = 0; i < size; i++){
            if(i < l_size){
                left[i] = array[i];
            } else {
                right[i - a] = array[i];
            }
        }
        merge_sort(a,left);
        merge_sort(b,right);
    }
    */
}

void swap(int array[], int a, int b){
    int tmp;
    tmp = array[a];
    array[a] = array[b];
    array[b] = tmp;
}

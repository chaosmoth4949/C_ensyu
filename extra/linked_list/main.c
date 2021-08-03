#include <stdio.h>

typedef struct {
    int value;
    Cell next;
} Cell;

void insert_head(Cell c1, Cell c2);
int delete(int i);
int locs
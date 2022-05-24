#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define line 4
#define column 3

int toCompare(const void *a, const void *b);
// qsort(void *matriz, int colunms, int sizeblock, int (*toCompare)(const void *a, const void *b));

int main () {

    int matriz[line][column] = {{50, 10, 15},
                                {20, 25, 30},
                                {35, 40, 45},
                                {50, 55, 60}};

    qsort(matriz, (column*line), sizeof(int), toCompare);

    printf("\n\n");
    for (int i=0; i<line; i++) {
        for (int j=0; j<column; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int toCompare(const void *p1, const void *p2) {
    if (*(int*)p1 > *(int*)p2)
	    return 1;
    else if (*(int*)p1 < *(int*)p2)
        return -1;
    
    return 0;
}
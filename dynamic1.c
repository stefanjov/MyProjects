#include <stdio.h>
#include <stdlib.h>
#define DUZINA 10

int main () {
    double *p;
    int i;
    int n = 10;

    p = calloc(DUZINA, sizeof(double));

    for(i = 0; i < DUZINA; i++)
        *(p + i) = i;
    for(i = 0; i < DUZINA; i++)
        printf("Value of %d. element is: %f\n", i + 1, *(p+i));
    free(p);
}

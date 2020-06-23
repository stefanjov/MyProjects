//obavezna stdlib.h BEZ TOGA NEMA DINAMICKOG NIZA malloc, realloc i free

#include <stdio.h>
#include <stdlib.h>


int main () {
  int duzina, i, sum = 0, *niz;

  printf("Unesite broj elemenata: \n");
  scanf("%d", &duzina);

  niz = malloc(duzina * sizeof(int));

  if(niz == NULL) {
    printf("Nije moguce kreirati niz!");
  return 0;
  }
  printf("Unesite elemente!");
  for(i = 0; i < duzina; ++i) {
    scanf("%d", niz + 1);
    sum += *(niz + 1);
  }

  printf("Suma niza je %d\n", sum);

  free(niz);
  return 0;
}

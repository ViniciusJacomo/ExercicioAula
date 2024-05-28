#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void) {
  
  int i, y, num, prov, vetor[6];
  srand(time(0));
 
  for (i = 0; i < 6; i++) {
    num = rand() % 101;
    for (y = 0; y < 6; y++) {
      if (num != vetor[y]) {
        vetor[i] = num;
      }
    }
  }
 
  for (i = 0; i < 6; i++) {
    for (y = 0; y < 6; y++) {
      if (vetor[i] < vetor[y]) {
        prov = vetor[i];
        vetor[i] = vetor[y];
        vetor[y] = prov;
      }
    }
  }
 
  for (i = 0; i < 6; i++) {
    printf("%d\n", vetor[i]);
  }
  return 0;
}

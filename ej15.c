#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  printf("%d %d\n", a,b);
  swap(&a,&b);
  printf("%d %d\n", a,b);
  return 0;
}

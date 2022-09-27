#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int raiz1(int a, int b, int c) {
  int desc = sqrt(b*b -4 * a * c);
  printf("%d\n", desc);
}

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  raiz1(a,b,c);
  return 0;
}

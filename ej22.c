#include <stdio.h>
#include <stdlib.h>

int ene(int b, int n) {
  if (n == 0) return 1;
  return b * ene(b,n-1);
}

int main(int argc, char *argv[]) {
  int b = atoi(argv[1]);
  int n = atoi(argv[2]);
  printf("%d\n", ene(b,n));
  return 0;
}

#include <stdio.h>
#include <stdlib.h>

int fact(int n) {
  if (n == 0) return 1;
  return n * fact(n-1);
}

int fact_it(int n) {
  int cont = 1;
  for(int i = 1; i <= n; i++) {
    cont *= i;
  }
  return cont;
}

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int res = fact(n);
  int res1 = fact_it(n);
  printf("%d\n", res);
  printf("%d\n", res1);
  return 0;
}

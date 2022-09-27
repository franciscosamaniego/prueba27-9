#include <stdio.h>
#include <stdlib.h>

int fibo(int n) {
  if(n == 0) return 0;
  if(n == 1) return 1;
  return fibo(n-1) + fibo(n-2);
}
int fibo2(int n) {
  int cont = 0;
  if(n == 0) return 0;
  if(n == 1) return 1;
  for(int i = 2; i < n; i++) {
    cont = i-1 + i-2;
  }
  return cont;
}

int main(int argc, char *argv[]) {
  int n= atoi(argv[1]);
  printf("%d\n", fibo(n));
  printf("%d\n", fibo2(n));
  return 0;
}

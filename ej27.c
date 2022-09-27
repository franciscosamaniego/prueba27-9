#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int prod(int a[], int b[], int n) {
  int cont = 0;
  for(int i = 0; i < n; i++){
    cont += a[i] * b[i];
  }
  return cont;
}

void print_arr(int a[], int n) {
  for(int i = 0; i< n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}
void print_arrb( int b[], int n) {
  for(int i = 0; i< n; i++) {
    printf("%d ", b[i]);
  }
  printf("\n");
}

void value(int a[], int b[], int n) {
  for (int i = 0; i < n; i++) {
    a[i] = rand() % 10;
    b[i] = rand() % 10;
  }
}

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int n = atoi(argv[1]);
  int a[n];
  int b[n];
  value(a,b,n);
  print_arr(a,n);
  print_arrb(b,n);
  printf("%d\n", prod(a,b,n));
  return 0;
}

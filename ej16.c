#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int mini(int a[], int n) {
  int min = INT_MAX;
  for(int i = 0; i < n; i++) {
    if(a[i] < min) min = a[i];
  }
  return min;
}

int maxi(int a[], int n) {
  int max = INT_MIN;
  for(int i = 0; i < n; i++) {
    if(a[i] > max) max = a[i];
  }
  return max;
}

int prom(int a[], int n) {
  int cont = 0;
  for(int i = 0; i < n; i++) {
    cont += a[i];
  }
  return cont / n;
}
void print_arr(int a[], int n) {
  for(int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}


int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int a[]= {1,2,3,10,89,0,-34};
  print_arr(a,n);
  printf("Min: %d\n", mini(a,n));
  printf("Max: %d\n", maxi(a,n));
  printf("Prom: %d\n", prom(a,n));
  return 0;
}

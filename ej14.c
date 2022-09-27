#include <stdio.h>
#include <stdlib.h>

void swap(int a[], int x1, int x2) {
  int t = a[x1];
  a[x1] = a[x2];
  a[x2] = t;
}

void print_arr(int a[], int length) {
  for(int i = 0; i < length; i++){
    printf("%d ", a[i]);
  }
  printf("\n");
}

int main(int argc, char *argv[]) {
  int a[] = {1,2,3,4,1,10,78};
  int x1 = atoi(argv[1]);
  int x2 = atoi(argv[2]);
  print_arr(a,7);
  swap(a,x1,x2);
  print_arr(a,7);
  return 0;
}

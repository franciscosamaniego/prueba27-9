#include <stdio.h>
#include <stdlib.h>

void arr(int a[], int length) {
  for(int i = 0; i < length; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

int main(int argc, char *argv[]) {
  int a[] = {1,1,2,3,46,7,8,45};
  int n = atoi(argv[1]);
  arr(a,n);
  return 0;
}

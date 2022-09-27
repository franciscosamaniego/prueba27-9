#include <stdio.h>
#include <stdlib.h>

int find(int a[], int length, int n) {
  int res = -1;
  for(int i = 0; i < length; i++) {
    if(a[i] == n) res = i;
  }
  return res;
}

int main(int argc, char *argv[]) {
  int a[] = {1,10,23,4,-23,4,0};
  int n = atoi(argv[1]);
  printf("%d\n", find(a,3,n));
  return 0;
}

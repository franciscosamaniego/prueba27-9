#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool saludar(int a, int b, int c) {
  bool res = false;
  if(a == b && b == c) res = true;
  return res;
}
int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  printf("%s\n", saludar(a,b,c) ? "True" : "False");
  return 0;
}

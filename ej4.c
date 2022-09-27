#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_triangle(int a, int b, int c) {
  bool res = false;
  if(a + b > c && b + c > a && c + a > b) res = true;
  return res;
}
int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  printf("%s\n", is_triangle(a,b,c) ? "True" : "False");
  return 0;
}

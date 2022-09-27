#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool validate(int input, int min, int max) {
  bool res = false;
  if(input > min && input < max) res = true;
  return res;
}

int main(int argc, char *argv[]) {
  int input = atoi(argv[1]);
  int min = atoi(argv[2]);
  int max = atoi(argv[3]);
  printf("%s\n", validate(input,min,max) ? "True" : "False");
  return 0;
}

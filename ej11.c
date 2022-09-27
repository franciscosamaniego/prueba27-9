#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool igual(char *a, char *b) {
  bool res = false;
  if(strcmp(a,b) == 0) res = true;
  return res;
}

int main(int argc, char *argv[]) {
  char *a = argv[1];
  char *b = argv[2];
  printf("%s\n", igual(a,b) ? "True" : "False");
  return 0;
}

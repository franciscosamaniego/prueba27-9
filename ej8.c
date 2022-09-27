#include <stdio.h>
#include <stdlib.h>

int cara(char * s) {
  int i = 0;
  while(s[i] != 0) i++;
  return i;
}

int main(int argc, char *argv[]) {
  char *s = argv[1];
  int res = cara(s);
  printf("Caracteres:%d\n", res);
  return 0;
}

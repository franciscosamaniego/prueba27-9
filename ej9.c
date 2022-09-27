#include <stdio.h>
#include <stdlib.h>

int cara(char * s) {
  int i = 0;
  while(s[i] != 0) i++;
  return i;
}

void upper(char *s) {
  int n = cara(s);
  for(int i = 0; i < n; i++) {
    if(s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
  }
}

int main(int argc, char *argv[]) {
  char *s = argv[1];
  printf("%s\n", s);
  upper(s);
  printf("%s\n", s);
  return 0;
}

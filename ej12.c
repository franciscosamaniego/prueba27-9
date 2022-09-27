#include <stdio.h>
#include <stdlib.h>

int cara(char *s) {
  int i = 0;
  while(s[i] != 0) i++;
  return i;
}

void swap(char *s) {
  int length = cara(s);
  int i = 0;
  while(i != length) {
    char t = s[i];
    s[i] = s[length];
    s[length] = s[i];
    i++;
    length--;
  }
}

int main(int argc, char *argv[]) {
  char *s = argv[1];
  printf("%s\n", s);
  swap(s);
  printf("%s\n", s);
  return 0;
}

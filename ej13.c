#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int cara(char *s) {
  int i = 0;
  while(s[i] != 0) i++;
  return i;
}

bool palindromo(char *s) {
  int i = cara(s);
  bool res = false;
  for(int j = 0; j < i/2; j++) {
    if(s[j] == s[i-j-1]) res = true;
  }
  return res;
}

int main(int argc, char *argv[]) {
  char *s = argv[1];
  printf("%s\n", palindromo(s) ? "True" : "False");
  return 0;
}

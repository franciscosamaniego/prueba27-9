#include <stdio.h>
#include <stdlib.h>

void print_menu(char *s[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d)%s\n", i+1, s[i]);
  }
}

int main(int argc, char *argv[]) {
  char *s[] = {
    "Pasear al perro",
    "Estudiar",
    "Sacar la basura"
  };
  int n = atoi(argv[1]);
  print_menu(s,n);
  return 0;
}

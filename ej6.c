#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ale(int a, int b) {
  return (rand() % b - a + 1) + a;
}

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  printf("%d\n", ale(a,b));
  return 0;
}

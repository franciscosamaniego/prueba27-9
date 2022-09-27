#include <stdio.h>
#include <stdlib.h>

void bienvenida() {
  system("clear");
  printf("Bienvenido a tus notas\n");
  printf("1)Ver notas\n");
  printf("2)Agregar notas\n");
  printf("3)Borrar notas\n");
  printf("4)Salir\n");
}
void presskey() {
  printf("Presione enter para continuar\n");
  getchar();
}

void see_notes() {
  FILE *fp;
  fp = fopen("notas.txt", "r");
    int c;
    printf("------Notas------\n");
    while((c = fgetc(fp)) != EOF) {
      putchar(c);
    }
    printf("------Fin---------\n");
    presskey();
  fclose(fp);
}

void add_note() {
  FILE *fp;
  fp = fopen("notas.txt", "a");
  char nota[100] = " ";
  fgets(nota, 100, stdin);
  fprintf(fp, "%s", nota);
  presskey();
  fclose(fp);
}

void delete_notes() {
  FILE *fp;
  fp = fopen("notas.txt", "w");
  printf("Notas borradas\n");
  presskey();
  fclose(fp);
}

int main(int argc, char *argv[]) {
  while(1) {
    bienvenida();
    int n;
    scanf("%d", &n);
    getchar();
    switch (n) {
      case 1:
        see_notes();
        break;
      case 2:
        add_note();
        break;
      case 3:
        delete_notes();
        break;
      case 4:
        exit(0);
      default:
        printf("Esa no es una opcion\n");
        presskey();
        break;
    }

  }
  return 0;
}

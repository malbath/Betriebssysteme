#include <stdio.h>


main() {
  int a = 10;
  printf("Inhalt der Variablen a:    %i\n", a);
  printf("Adresse der Variablen b:   %p\n", &a);
  sub(a);
}

sub(int a) {
  int b;
  b = b - 1;
  printf("Inhalt der Variablen b:    %i\n", b);
  printf("Adresse der Variablen b:   %p\n", &b);
}



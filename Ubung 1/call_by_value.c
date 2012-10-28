/* Uebung Call by Value */
/* A und B sind nicht im gleichen Speicherort */


int b;

main() {
  int a = 10;
  printf("Inhalt von a: %d\n", a);
  printf("Speicheradresse: %p\n", &a);
  sub(a);
}

sub(int b) {
  b = b - 1;
  printf("Inhalt von b: %d\n", b);
  printf("Speicheradresse: %p\n", &b);
}
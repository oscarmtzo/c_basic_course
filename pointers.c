#include <stdio.h>

int main() {
  int n = 10;

    /* your code goes here */
   int *pointer_to_n = &n;
    printf("%p\n",(void*)&n);
    printf("puntero-> %p\n",&(*pointer_to_n) );
    *pointer_to_n += 1;
  /* testing code */
  if (&(*pointer_to_n) != (void*)&n) return 1;
//   if (*pointer_to_n != 11) return 1;

  printf("Done!\n");
  return 0;
}
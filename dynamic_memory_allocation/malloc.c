#include <stdio.h>
#include <stdlib.h> // Library to use malloc

int main (void)
{
  
  // Malloc argument is the number of bytes of the allocated memory
  // and it will return a memory adress of that memory
  int *a = malloc(sizeof(int) * 10);

  for (int i = 0; i<10; i++)
  {
    a[i] = 10- i;
  }

  for (int i = 0 ; i<10; i++)
  {
    printf("a[%d] = %d\n", i, a[i]);

  }
  printf("\n");

  printf("a: %p\n", a); // Memory adress
  

  return 0;
}

#include <stdio.h>
#include <stdlib.h> // Library to use malloc

int main (void)
{
  
  // Calloc is the makes the same as the malloc but there are two differences
  // It arguments must me the number of things and the size of each thing
  // And the calloc makes all the memory that he uses to be zeros before using
  int *a = calloc(10, sizeof(int));

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
  
  free(a); // Now this space can be used again but IMPORTANT
  // this space is not clean it have the numbers from before 
  // it simply can be reused again even though he is full of trash

  return 0;
}

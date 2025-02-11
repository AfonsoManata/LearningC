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
  
  
  // Using realloc - first argument is the pointer that you are reallocing
  // next is the space that you want to use 
  // It return the memory adress 

  a = realloc(a, sizeof(int) * (10 + 5));

  for (int i = 10; i<10+5; i++)
  {
    a[i] = 9;
  }

  for (int i = 0 ; i<10+5; i++)
  {
    printf("a[%d] = %d\n", i, a[i]);

  }
  printf("\n");

  // We will see that the output will show that the memory realloced 
  // will be all number 9

  free(a); // Now this space can be used again

  return 0;
}

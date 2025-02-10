#include <stdio.h>

int main()
{
  // Iterate a 2D array using pointers
  int matriz[3][3] = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}
  };

  int *ptr = &matriz[0][0];

  printf("Elementos da matriz:\n");
  for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
          printf("%d ", *(ptr + i * 3 + j)); 
      }
      printf("\n");
  }

  return 0;

}

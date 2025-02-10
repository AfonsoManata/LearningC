#include <stdio.h>

int main()
{
  // O motivo pelo qual *(prt + i) funciona é porque ao fazer
  // ptr + 1 ele avança 4 bytes  logo ptr + i vai para o elemento certo do array
  
  int arr[5] = {10, 20, 30, 40, 50};
  int *ptr = arr; // Ponteiro apontando para o primeiro elemento do array


  printf("Valores do array:\n");
  for (int i = 0; i < 5; i++) {
      printf("arr[%d] = %d\n", i, *(ptr + i));
  }


  for (int i = 0; i < 5; i++) {
      *(ptr + i) += 5; // Adiciona 5 a cada elemento
  }

  printf("\nValores modificados do array:\n");
  for (int i = 0; i < 5; i++) {
      printf("arr[%d] = %d\n", i, *(ptr + i));
  }


  return 0;
}

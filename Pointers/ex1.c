#include <stdio.h>

int main (){
  int a = 2;
  int *pA = &a;

  printf("Start Value:%d\n", *pA);
  printf("Memory adress in the beginning:%p\n", pA);
  *pA = 3;

  printf("Final Value :%d\n", a);
  printf("Memory adress in the final moment:%p\n", pA);

  return 0;
}

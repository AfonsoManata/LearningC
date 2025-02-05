#include <stdio.h>

int main(void){
    
   int n;
   printf("Your number between 1 and 10:");
   scanf("%d", &n);
   for (int i = 1; i <= 10; i++)
   {
    int res = n*i;
    printf("%d x %d = %d\n", n, i, res);

   }
}
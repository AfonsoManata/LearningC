#include <stdio.h>
#include <string.h>

int main(){
  char x = 'X';
  char y = 'Y';
  char temp;

  // Other option is in arrays using strcopy 
  // function but the size o the arrays can lead to unexpected results
  // So the best way in those situations is to asign the size of the arrays
  // equal to every string 

  temp = x;
  x = y;
  y = temp;

  printf("x = %c\n", x);
  printf("y = %c\n", y);
}


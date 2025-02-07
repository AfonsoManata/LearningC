#include <stdio.h>

int main()
{

   // & = AND  Both need to be 1
   // | = OR  One needs to be 1
   // ^ = XOR  Only one must be 1
   //<< = left shift  Moving one spot to the let and add the 0 at final 
   //>> = right shift   Moving one spot to the right and add the 0 at beginning 
  
  
  int x = 6; // 6 = 00000110
  int y = 12; // 12 = 00001100 
  int z = 0;  // 6 = 00001100
  
  z = x & y;
  printf("AND = %d\n", z);

     
  z = x | y;
  printf("Or = %d\n", z);


  z = x ^ y;
  printf("^XOR = %d\n", z);


  z = x << 2;
  printf("Left shift = %d\n", z); 
  
   
  z = x >> 1;
  printf("Right shift = %d\n", z);


  return 0;
}

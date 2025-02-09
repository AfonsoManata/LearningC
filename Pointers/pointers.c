#include <stdio.h>

int main()
{
  // pointer is just a data type that stores memory adresses
  // if you differenciate a pointer you will get the value assigned
  // to that memory adress

  int age = 18;
  int *pAge = &age; // The data type must be equal
  
  // Printing the value in that memory adress
  printf("Value of age is %d\n", age);
  printf("Value of age is %d\n", *pAge);

  // Printing the memory adress 
  printf("Value of age is %p\n", &age);
  printf("Value of age is %p\n", pAge);


  return 0;
}

# include <stdio.h>

int main()
{  
  // Memory : an array of bytes with ram (Street with various houses)
  // Memory block : a single byte within memoty ( House )
  // Memory address : the address of where the memory is located (address of the House)

  char a = 'X';
  char b = 'Y';

  printf("%zu bytes\n", sizeof(a));
  printf("%zu bytes\n", sizeof(b));

  // Memory addresses 
  printf("%p\n", &a);
  printf("%p\n", &b);

  return 0;
}

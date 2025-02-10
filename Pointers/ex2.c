# include <stdio.h>

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp; 
}

int main(){
  int a = 2, b = 3;

  swap(&a, &b);

  printf("Swaped Values a = %d e b = %d\n", a, b);

}

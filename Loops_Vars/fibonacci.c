#include <stdio.h>

int main(void){
    int ant=0, new=1, n, sum;
    printf("Size of the Fibonacci sequence:");
    scanf("%d", &n);
    printf("%d,",ant);
    for (int i = n; n>=0; n--)
    {
        if (n > 0){
            printf(" %d,", new);
        }
        else{
            printf(" %d\n", new);
        }
        sum = ant;
        ant = new;
        new = sum + new ;
    }
}
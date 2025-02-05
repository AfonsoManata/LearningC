#include <stdio.h>

int main(void){
    int n, div=0;
    printf("The number that you want to check if it's prime:");
    scanf("%d", &n);
    for (int i = n; i > 0; i--)
    {
        if (n % i == 0){
            div++;
        }
    }
    
    if (div==2){
        printf("Your number is a prime number!\n");
    }
    else{
        printf("Your number is not a prime number!\n");
    }    
    
    return 0;
}
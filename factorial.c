#include <stdio.h>

int main(void){
    int n, res = 1;
    printf("Number that you want to calculate the factorial:"); 
    scanf("%d", &n);
    for (int i = n; i>1; i--)
    {
        res *= i;
    }
    printf("The result is %d\n", res);
    return 0;
}
#include <stdio.h>

int main(){
    int num = 100, sum = 0;
    while (num > 0){
        sum = sum + num;
        num = num - 1;
    }
    printf("%d", sum);
    return 0;
}
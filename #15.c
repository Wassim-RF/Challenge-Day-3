#include <stdio.h>

int main() {
    int num , i , fact = 1;
    printf("Entrer un nombre : ");
    scanf("%d" , &num);
    for (i = 1 ; i <= num ; i++) {
        fact *= i;
    }
    printf("The factorial of your number is %d\n " , fact);
    return 0;
}
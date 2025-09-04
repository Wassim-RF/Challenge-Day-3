#include <stdio.h>

int main() {
    int num , i;
    printf("Entrer un nombre : ");
    scanf("%d" , &num);

    for ( i = 10; i >= 1; i--) {
        printf("%d x %d = %d \n" , num , i , i * num);
    }
    
    return 0;
}
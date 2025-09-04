#include <stdio.h>

int main() {
    int num;
    int i = 1;
    int somme = 0;
    printf("Entrer un nombre : ");
    scanf("%d" , &num);
    while (i <= num) {
        somme += i;
        i++;
    } 
    for (i = 1; i <= num ; i++) {
        if (i != num) {
            printf("%d + " , i);
        } else {
            printf("%d = %d \n" , i , somme);
        }
    }
    return 0;
}
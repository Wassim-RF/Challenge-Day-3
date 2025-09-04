#include <stdio.h>

int main() {
    int n , i;
    int s = 0;
    printf("Entrer un nombre : ");
    scanf("%d" , &n);
    if (n == 0) {
        printf("Le programme va arrete.");
    }else {
        for (i = 1 ; i <=  n ; i++) {
            s += i;
        }
        printf("Le somme du nombre de 1 a %d est : %d." , n , s);
    }
    return 0;
}
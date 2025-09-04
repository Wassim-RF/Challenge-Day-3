#include <stdio.h>

int main() {
    int n , i;
    int s = 0;
    int moyenne;
    printf("Entrer un nombre : ");
    scanf("%d" , &n);
    if (n == 0) {
        printf("Le programme va arrete.");
    }else {
        for (i = 1 ; i <=  n ; i++) {
            s += i;
        }
        moyenne = s / n;
        printf("Le somme du nombre de 1 a %d est : %d.\nSont moyenne est : %d" , n , s , moyenne);
    }
    return 0;
}
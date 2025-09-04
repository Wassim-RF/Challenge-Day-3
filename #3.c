#include <stdio.h>
#include <math.h>

int main() {
    int n , i;
    int p = 0;
    printf("Entrer un nombre : ");
    scanf("%d" , &n);
    for (i = 1 ; i <= n ; i++) {
        if (n % i == 0) {
            p++;
        }
    }
    if (p == 2 ) {
        printf(" %d est un nombre premier." , n);
    } else {
        printf(" %d n'est pas premier." , n);
    }
    return 0;
}
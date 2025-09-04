#include  <stdio.h>

int main() {
    int num , i;
    int s  = 0;
    printf("Entrer un nombre : ");
    scanf("%d" , &num);

    for (i = 1 ; i <= 10 ; i++) {
        printf("%d x %d = %d\n" , num , i , num * i);
        s += num * i;
    }
    printf("Somme totale : %d." , s);
    return 0;
}
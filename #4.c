#include <stdio.h>


int main()
{
    int inver = 0, num;
    printf("Entrez un nombre : ");
    scanf("%d", &num);
    while (num != 0) {
        inver *= 10;
        inver += num % 10;
        num = num / 10;
    }
    printf("Le nombre inverse du = %d\n", inver);
    return 0;
}
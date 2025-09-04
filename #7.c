#include <stdio.h>

int main() {
    int num , num1 , num2 , suivant , i ;
    num1 = 0;
    num2 = 1;

    printf("Entrez le nombre de termes : ");
    scanf("%d", &num);

    for (i = 0 ; i < num ; i++) {
        suivant = num1 + num2;
        num1 = num2;
        num2 = suivant;
        printf("%d  " , suivant);
    }
    return 0;
}

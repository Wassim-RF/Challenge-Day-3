#include <stdio.h>
#include <stdlib.h>

int main() {
    int n , i;
    char character[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz123456789";

    printf("Entrer la longueur du mot pass : ");
    scanf("%d" , &n);

    printf("Le mot de passe est : ");
    for (i = 0 ; i  < n ; i++) {
        int mdp = rand() % (sizeof(character));
        printf("%c" , character[mdp]);
    }
    printf("\n");
    return 0;
}
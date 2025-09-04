#include <stdio.h>

int main() {
    int i , num;
    char *day[7] = {"Lundi", "Mardi", "Mercredi", "Jeudi", 
                    "Vendredi", "Samedi", "Dimanche"};
    for (i = 0; i < 7; i++) {
        printf("%s\n", day[i]);  // نطبع كل يوم
    }
    printf("Entrer le nombre du jour que  tu veux : ");
    scanf("%d" , &num);
    printf("Votre jour : %s , le jour qui apres est %s , et le jour qui avant est %s.\n" , day[num - 1] , day[num] , day[num - 2]);
    return 0;
}

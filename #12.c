#include <stdio.h>

void triBulle(int arr[]) {
    int i, j, temp;
    for (i = 0; i < 5 - 1; i++) {
        for (j = 0; j < 5 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int num[5] , i;
    printf("Entrer 5 nombre : \n");
    for (i = 0 ; i < 5 ; i++) {
        printf("  %d : " , i + 1);
        scanf("%d" , &num[i]);
    }
    triBulle(num);

    printf("Le tri a bulles : ");
    for (i = 0 ; i < 5 ; i++) {
        printf("%d  " , num[i]);
    } 
    return 0;
}
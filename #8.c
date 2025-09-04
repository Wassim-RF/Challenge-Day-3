#include <stdio.h>

int findMe( int arr[] , int n , int skip) {
    int left = 0 , right = n - 1;
    while (left <= right) {
        int med = (right + left) /2;

        if (arr[med] == skip) {
            return med;
        }
        if (arr[med] < skip) {
            left = med + 1;
        } else {
            right = med - 1;
        }
        return -1;
    }
    return 1;
}

int main() {
    int num[10] , i;
    int shearch;
    for (i = 0 ; i < 10 ; i++) {
        printf("Enter a number : ");
        scanf("%d" , &num[i]);
    }
    printf("Entrer le nombre que tu veux le chercher : ");
    scanf("%d" , &shearch );

    int result = findMe(num , 10 , shearch);

    if (result != -1) {
        printf("Numero note find.");
    }else {
        printf("Element find.");
    }
    return 0;
}
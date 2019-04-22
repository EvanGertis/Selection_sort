#include "stdlib.h"
#include "stdio.h"

#define MAX 100

void displayArray(int a[], int n);

int main(){

    int minIndex, temp, n, a[MAX];

    printf("How many elements would you like to add to the array?: \n");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Enter element %d :\n", i);
        scanf("%d", &a[i]);
    }

    displayArray(a, n);

    for(int i = 0; i < n - 1; i++){
        minIndex = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[minIndex]){
                minIndex = j;
            }
        }

        if(i != minIndex){
            temp = a[i];
            a[i] = a[minIndex];
            a[minIndex] = temp;
        }

    }

    displayArray(a, n);
    

    return 0;
}

void displayArray(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("%d | ", a[i]);
    }
    printf("\n");
}

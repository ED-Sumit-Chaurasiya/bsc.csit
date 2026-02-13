//13.Write a C program that accepts some integers from the user and find the highest value and the input position.
#include <stdio.h>
int main() {
    int n, i;
    int max, position;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    position = 1;
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            position = i + 1; 
        }
    }
    printf("\nHighest value = %d\n", max);
    printf("Position = %d\n", position);
    getch();
    return 0;
}

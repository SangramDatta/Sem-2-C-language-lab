//Program to sort an array using selection sort.
#include <stdio.h>
int main() {
    int n, i, j, minIndex, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int A[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    for (i = 0; i < n - 1; i++) {
        minIndex = i; 

        for (j = i + 1; j < n; j++) {
            if (A[j] < A[minIndex]) {
                minIndex = j;  
            }
        }
        if (minIndex != i) {
            temp = A[i];
            A[i] = A[minIndex];
            A[minIndex] = temp;
        }
    }
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}

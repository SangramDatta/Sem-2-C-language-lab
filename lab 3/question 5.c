//Program to sort an array using Bubble sort.
#include <stdio.h>
int main() {
    int n, i, d, swap;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int A[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (d = 0; d < n - i - 1; d++) {
            if (A[d] > A[d + 1]) {
                swap = A[d];
                A[d] = A[d + 1];
                A[d + 1] = swap;
            }
        }
    }
    printf("Sorted list in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", A[i]);
    }
    return 0;
}

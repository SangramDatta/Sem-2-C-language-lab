#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers:\n",n);
    for (int i = 0; i < n; i++) {
        scanf("%d", (arr + i));
    }
    printf("\n");


    int min = *arr;
    int pos = 0;
    for (int i = 1; i <n; i++) {
        if (*(arr + i) < min) {
            min = *(arr + i);
            pos = i;
        }
    }
    printf("The smallest number is %d at position %d.\n", min, pos + 1); 
    return 0;
}


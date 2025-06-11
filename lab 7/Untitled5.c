#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *A;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

   A = (int *)calloc(n, sizeof(int)); 
    if (!A) return 1;

    printf("Enter numbers:\n");
    for (int i = 0; i < n; i++) scanf("%d", A + i);

    printf("Entered numbers:\n");
    for (int i = 0; i < n; i++) printf("%d ", *(A + i));

    free(A);
    return 0;
}


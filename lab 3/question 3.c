//Program to search a number from an array using linear search.
#include<stdio.h>
int main(){
	int val,i,n;
	int found=0;
	int pos=-1;
	  printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int A[n]; 

    printf("Enter the elements in sorted manner:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    printf("Enter the value to search: ");
    scanf("%d", &val);
    for (i = 0; i < n; i++) {
        if (A[i] == val) {
            found = 1;
            pos = i ;  
            break;
        }
    }

    if (found == 1) {
        printf("The value is found at position A[i=%d]\n", pos);
    } else {
        printf("The value is not found in the array.\n");
    }

    return 0;
}

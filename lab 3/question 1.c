//Program to accept an element finds out how many times that element has existed in an array.
#include <stdio.h>
int main() {
    int flag = 0;  
    int n, i, j;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int A[n]; 
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(A[i] == A[j]) { 
                flag = 1;  
                break;  
            }
        }
        if(flag == 1) {  
            break;
        }
    }
    if(flag == 0) {
        printf("No Duplicate\n");
    } else {
        printf("Duplicate found\n");
    }
    
    return 0;
}

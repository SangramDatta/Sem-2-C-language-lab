//Program to find out whether the entered number is prime 
#include <stdio.h>
int main() {
    int n, i, c = 0;
    printf("Enter any number: ");
    scanf("%d", &n);
    if (n <= 1) {
        printf("%d is not a Prime number.\n", n);
        return 0;
    }
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            c++;  
            break;
        }
    }
    if (c == 0) {
        printf("%d is a Prime number.\n", n);  
    } else {
        printf("%d is not a Prime number.\n", n);  
    }

    return 0;
}

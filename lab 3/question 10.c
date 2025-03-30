//Program to string comparison.
#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    printf("Enter the 1st string: ");
    scanf("%s", a);  
   
    printf("Enter the 2nd string: ");
    scanf("%s", b); 
    
    if (strcmp(a, b) == 0)
        printf("Entered strings are equal.\n");
    else
        printf("Entered strings are not equal.\n");

    return 0;
}


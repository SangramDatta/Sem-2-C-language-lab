//Program to sort an array using insertion sort.
#include <stdio.h>
int main()
{
    int a[100], number, i, j, temp;
    
    printf("\n Enter the total Number of Elements  :  ");
    scanf("%d", &number);
    
    printf("\nEnter the Array Elements\n  :  ");
    for(i = 0; i < number; i++)
        scanf("%d", &a[i]);
    i = 1;
    while( i <= number - 1)
    {
        j = i;
        while( j > 0 && a[j - 1] > a[j])
        {
            temp = a[j];
            a[j] = a[j - 1];
            a[j - 1] = temp;
            j--;
        }
        i++;
    }
    printf("\n Result : ");
    for(i = 0; i < number; i++)
    {
        printf(" %d \t", a[i]);
    }
    printf("\n");
    return 0;
}

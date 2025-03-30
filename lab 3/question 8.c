//Program to find the length of the string without using strlen and then pass the string to characters.
#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  
    while (str[length] != '\0') {
        length++;  
    }
    printf("Length of the string: %d\n", length - 1);  

    printf("Characters in the string:\n");
    for (i = 0; i < length - 1; i++) {  
        printf("%c\n", str[i]);
    }

    return 0;
}


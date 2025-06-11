#include <stdio.h>

int main() {
    char text[1000], *ptr;
    int w = 0, c = 0,l = 0, i = 0;

    printf("Enter text (Press Enter twice to stop):\n");
    fgets(text, sizeof(text), stdin);

    ptr = text;
    while (*ptr) {
        c++;
        if (*ptr == '\n') l++;
        if (*ptr == ' ' || *ptr == '\n' || *ptr == '\t') i = 0;
        else if (!i) { i = 1; w++; }
        ptr++;
    }

    printf("\nEntered text:\n%sTotal characters: %d\nTotal words: %d\nTotal lines: %d\n", text, c, w, l);
    return 0;
}

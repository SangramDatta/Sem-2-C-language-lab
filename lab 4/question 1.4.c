//A function call without return type and without arguments.
#include<stdio.h>
int p = 600, r = 5, t = 2;

void gen();

int main() {
    gen();  
    return 0;
}

void gen() {
    int simpint = (p * r * t) / 100;
    printf("Simple Interest = %d\n", simpint);
}


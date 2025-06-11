#include <stdio.h>

float sum(float a, float b) {
    return a + b;
}

float difference(float a, float b) {
    return a - b;
}

int main() {
    float num1, num2;
    float (*operation)(float, float); // Function pointer declaration

    printf("Enter two floating-point numbers: ");
    scanf("%f %f", &num1, &num2);

    operation = sum;
    printf("Sum: %.2f\n", operation(num1, num2));

    operation = difference;
    printf("Difference: %.2f\n", operation(num1, num2));

    return 0;
}


#include <stdio.h>

// Function to add two numbers
int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 10;
    int num2 = 20;
    int result;

    printf("Welcome to my C GitHub project!\n");

    result = addNumbers(num1, num2);

    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);
    printf("Sum: %d\n", result);

    if (result > 0) {
        printf("The result is a positive number.\n");
    }

    printf("Program finished successfully.\n");

    return 0;
}


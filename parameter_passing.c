#include <stdio.h>

// Function to demonstrate parameter passing by value
void passByValue(int num) {
    num = num + 10;
    printf("Inside passByValue function: %d\n", num);
}

// Function to demonstrate parameter passing by reference
void passByReference(int* num) {
    *num = *num + 10;
    printf("Inside passByReference function: %d\n", *num);
}

// Function to demonstrate parameter passing by value-result
void passByValueResult(int* num) {
    int temp = *num;
    *num = *num + 10;
    printf("Inside passByValueResult function: %d\n", *num);
    *num = temp;
}

int main() {
    int num = 5;

    printf("Before function calls: %d\n", num);

    passByValue(num);
    printf("After passByValue function: %d\n", num);

    passByReference(&num);
    printf("After passByReference function: %d\n", num);

    passByValueResult(&num);
    printf("After passByValueResult function: %d\n", num);

    return 0;
}
// Before function calls: 5
// Inside passByValue function: 15
// After passByValue function: 5
// Inside passByReference function: 15
// After passByReference function: 15
// Inside passByValueResult function: 25
// After passByValueResult function: 15
#include <stdio.h>

// Function to add two integers using bitwise operators
int bitwiseAdd(int a, int b) {
    while (b != 0) {
        int carry = a & b;      // Common set bits → will generate carry
        a = a ^ b;              // Add without considering carry
        b = carry << 1;         // Carry shifted left (actual addition carry)
    }
    return a;
}

// Function to subtract using bitwise logic: a - b = a + (~b + 1)
int bitwiseSubtract(int a, int b) {
    int negB = bitwiseAdd(~b, 1); // Two’s complement of b
    return bitwiseAdd(a, negB);   // Add a + (-b)
}

int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    int result = bitwiseSubtract(x, y);
    printf("Result of %d - %d = %d\n", x, y, result);

    return 0;
}

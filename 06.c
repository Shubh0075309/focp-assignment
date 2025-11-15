#include <stdio.h>

int binaryToDecimal(long long binary) {
    int decimal = 0, base = 1;

    while (binary > 0) {
        int lastDigit = binary % 10;   // Extract last binary digit
        decimal += lastDigit * base;   // Multiply by power of 2
        base *= 2;                     // Move to next binary place value
        binary /= 10;
    }

    return decimal;
}

void decimalToBinary(int decimal) {
    int binary[32], i = 0;

    // Convert by repeated division by 2
    while (decimal > 0) {
        binary[i++] = decimal % 2;
        decimal /= 2;
    }

    // Print in reverse (MSB to LSB)
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
    printf("\n");
}

int main() {
    int choice;
    long long binaryInput;
    int decimalInput;

    printf("------ Binary-Decimal Converter ------\n");
    printf("1. Convert Binary to Decimal\n");
    printf("2. Convert Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%lld", &binaryInput);

        int decimal = binaryToDecimal(binaryInput);
        printf("Decimal: %d\n", decimal);

    } else if (choice == 2) {
        printf("Enter a decimal number: ");
        scanf("%d", &decimalInput);

        decimalToBinary(decimalInput);

    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}

//  Create a C program that allows the user to convert between Binary and Decimal systems based
// on their choice, showcasing understanding of data encoding and computer number systems used in
// hardware-level design.
#include <stdio.h>
int BinToDec(int n)
{
    int decimal = 0, base = 1, rem;
    while (n > 0)
    {
        rem = n % 10;
        decimal = decimal + rem * base;
        n = n / 10;
        base = base * 2;
    }
    return decimal;
}

int DecToBin(int n)
{
    int binary = 0, rem, base = 1;
    while (n > 0)
    {
        rem = n % 2;
        binary = binary + rem * base;
        n = n / 2;
        base = base * 10;
    }
    return binary;
}

int main()
{
    int choice, num;
    do
    {
        printf("\nMenu:\n1. Binary to Decimal\n2. Decimal to Binary\n3. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("Enter a binary number: ");
            scanf("%d", &num);
            printf("Decimal equivalent: %d\n", BinToDec(num));
        }
        else if (choice == 2)
        {
            printf("Enter a decimal number: ");
            scanf("%d", &num);
            printf("Binary equivalent: %d\n", DecToBin(num));
        }
        else if (choice == 3)
        {
            printf("Exiting the program.\n");
        }
        else
        {
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);
    return 0;
}

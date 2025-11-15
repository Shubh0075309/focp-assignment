// Construct a C program to find the HCF (Highest Common Factor) of two integers using
// iterative or recursive logic — a core operation in optimisation algorithms and cryptographic
// computations.
#include <stdio.h>

int hcf(int num1, int num2)
{
    if (num2 == 0)
    {
        return num1;
    }
    else
    {
        return num1 % num2;
    }
}

int main()
{
    int num1, num2, result;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("HCF of %d and %d is %d", num1, num2, hcf(num1, num2));
    return 0;
}

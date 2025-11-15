// Develop a C program to check whether a given number is an Armstrong number or not,
// demonstrating understanding of number manipulation and digit-based computations used in digital
// verification systems using for loop

#include <stdio.h>
#include <math.h>

int main()
{
    int inpnum, orNum, remainder, n = 0;
    float result = 0.0;
    printf("Enter an integer: ");
    scanf("%d", &inpnum);
    orNum = inpnum;

    for (orNum = inpnum; orNum != 0; ++n)
    {
        orNum /= 10;
    }
    orNum = inpnum;

    for (orNum = inpnum; orNum != 0; orNum /= 10)
    {
        remainder = orNum % 10;
        result += pow(remainder, n);
    }

    if ((int)result == inpnum)
        printf("%d is Armstrong number.", inpnum);
    else
        printf("%d is not Armstrong number.", inpnum);

    return 0;
}

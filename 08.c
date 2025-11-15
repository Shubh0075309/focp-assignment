// Develop a C program to generate the Fibonacci series up to ‘n’ terms, where each term is the 
// sum of the two preceding ones. 
// 0, 1, 1, 2, 3, 5, 8, 13, ... 
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int a = 0, b = 1, c;
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d", a);
        if (i < n)
        {
            printf(", ");
        }
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}

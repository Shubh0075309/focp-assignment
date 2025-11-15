// Develop a C program to count the number of prime numbers in an array. 
#include <stdio.h>
int isPrime(int num)
{
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int arr[100], numOfElements, primeCount = 0;
    
    return 0;
}

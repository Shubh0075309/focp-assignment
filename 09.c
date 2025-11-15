// Design a C program to find the first occurrence of the score “99” in an array, focusing on linear
// search and data retrieval techniques.
#include <stdio.h>
int main()
{
    int scores[] = {85, 92, 99, 76, 88, 99, 100};
    int size = sizeof(scores) / sizeof(scores[0]);
    for (int i = 0; i < size; i++)
    {
        if (scores[i] == 99)
        {
            printf("\n1st Occurrence of 99 is at %d index\nor\nIt is at the %d element of the array!!", i, i + 1);
            break;
        }
        else
        {
            continue;
        }
    }
    return 0;
}

// . Implement a program to find who and how many students scored “99” in the marks array,
// emphasising data scanning and frequency counting.
#include <stdio.h>

int main()
{
    int arr[100], numOfStudent, counter = 0;
    printf("Number of students: ");
    scanf("%d", &numOfStudent);
    for (int i = 0; i < numOfStudent; i++)
    {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < numOfStudent; i++)
    {
        if (arr[i] == 99)
        {
            counter++;
        }
        else
        {
            continue;
        }
    }
    printf("%d students scored 99 marks.\n", counter);
    return 0;
}

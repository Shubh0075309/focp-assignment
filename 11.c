//  Develop a C program to traverse an array of scores, determine whether each score is even or
// odd using conditional logic, and store them into two separate arrays — even_array and odd_array.
#include <stdio.h>

int main()
{
    int scores[100], even_array[100], odd_array[100], numOfScores, Ecounter = 0, Ocounter = 0;
    printf("Enter number of scores to be entered: ");
    scanf("%d", &numOfScores);

    for (int i = 0; i < numOfScores; i++)
    {
        printf("Enter score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    for (int i = 0; i < numOfScores; i++)
    {
        if (scores[i] % 2 == 0)
        {
            even_array[Ecounter] = scores[i];
            Ecounter++;
        }
        else
        {
            odd_array[Ocounter] = scores[i];
            Ocounter++;
        }
    }
    printf("\nEven Scores: [");
    for (int i = 0; i < Ecounter; i++)
    {
        printf("%d ", even_array[i]);
    }
    printf("]\n");
    printf("\nOdd Scores: [");
    for (int i = 0; i < Ocounter; i++)
    {
        printf("%d ", odd_array[i]);
    }
    printf("]\n\n");
    return 0;
}

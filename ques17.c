#include <stdio.h>

int main() {
    int n, pos;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[50];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to delete (1=front, %d=middle, %d=end): ", n/2, n);
    scanf("%d", &pos);

    if (pos < 1 || pos > n)
        printf("Invalid position!\n");
    else {
        for (int i = pos - 1; i < n - 1; i++)
            arr[i] = arr[i + 1];
        n--;

        printf("Array after deletion: ");
        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}

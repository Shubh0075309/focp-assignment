#include <stdio.h>

int main() {
    int n, pos, val;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[50]; 
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to insert (1=front, %d=middle, %d=end): ", n/2+1, n+1);
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &val);

    for (int i = n; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[pos - 1] = val;
    n++;
    printf("Array after insertion: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

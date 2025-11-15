#include <stdio.h>

int findPeakElement(int arr[], int n) {
    // Check first element
    if (n == 1 || arr[0] >= arr[1])
        return 0;

    // Check last element
    if (arr[n-1] >= arr[n-2])
        return n - 1;

    // Check middle elements
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i-1] && arr[i] >= arr[i+1])
            return i;
    }

    return -1; // Should never happen
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int peakIndex = findPeakElement(arr, n);

    if (peakIndex != -1)
        printf("Peak element is %d at index %d\n", arr[peakIndex], peakIndex);
    else
        printf("No peak element found.\n");

    return 0;
}

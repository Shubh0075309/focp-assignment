#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j % 2);
        }

        int spaces = (n - i) * 2;
        for (int j = 1; j <= spaces; j++) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("%d", j % 2);
        }

        printf("\n");
    }
    return 0;
}

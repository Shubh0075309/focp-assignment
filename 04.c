//  Develop a C program to determine the quadrant in which a given coordinate point (x, y) lies on
// the XY plane, illustrating the use of conditional statements and coordinate geometry logic relevant in
// game development and robotics navigation.
#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter coordinates (x y): ");
    scanf("%d %d", &x, &y);
    if (x > 0 && y > 0)
    {
        printf("The point (%d, %d) lies in Quadrant 1.\n", x, y);
    }
    else if (x < 0 && y > 0)
    {
        printf("The point (%d, %d) lies in Quadrant 2.\n", x, y);
    }
    else if (x < 0 && y < 0)
    {
        printf("The point (%d, %d) lies in Quadrant 3.\n", x, y);
    }
    else if (x > 0 && y < 0)
    {
        printf("The point (%d, %d) lies in Quadrant 4.\n", x, y);
    }
    else if (x == 0 && y != 0)
    {
        printf("The point (%d, %d) lies on the Y-axis.\n", x, y);
    }
    else if (y == 0 && x != 0)
    {
        printf("The point (%d, %d) lies on the X-axis.\n", x, y);
    }
    else
    {
        printf("The point (%d, %d) is at the Origin.\n", x, y);
    }

    return 0;
}

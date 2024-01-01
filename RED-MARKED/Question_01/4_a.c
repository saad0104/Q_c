#include <stdio.h>
int PositiveSubtract(int x, int y)
{
    int PosSubtract = x - y;
    return (PosSubtract > 0) * PosSubtract;
}
int main()
{
    int X, Y;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &X, &Y);
    printf("The Positive Subtraction Will Be: %d\n", PositiveSubtract(X, Y));
    return 0;
}
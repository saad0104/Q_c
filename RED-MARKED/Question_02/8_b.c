#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 1;
    int y = 2;
    swap(&x, &y);
    printf("x = %d and y = %d", x, y);
    return 0;
}

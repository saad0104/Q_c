#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool is_Prime(int X)
{
    int count = 0;
    for (int i = 2; i <= sqrt(X); i++)
    {
        if (X % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int N;
    printf("Enter a Number: ");
    scanf("%d", &N);
    bool bl = true;
    if (!is_Prime(N))
    {
        bl = false;
    }
    else
    {
        while (N >= 1)
        {
            int R = N % 10;
            if (!is_Prime(R))
            {
                bl = false;
                break;
            }
            N = N / 10;
        }
    }
    if (bl)
    {
        printf("Entered Number is Super Prime.\n");
    }
    else
    {
        printf("Entered Number is Not a Super Prime.\n");
    }
    return 0;
}

#include <stdio.h>
#include <stdbool.h>
bool check_Armstrong(int N)
{
    int R, Copy = N;
    long long int Sum = 0;
    while (N >= 1)
    {
        R = N % 10;
        Sum += (R * R * R);
        N /= 10;
    }
    return (Sum == Copy);
}
int main()
{
    int N;
    for (int i = 100; i <= 999; i++)
    {
        if (check_Armstrong(i))
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
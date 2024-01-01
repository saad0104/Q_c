#include <stdio.h>
#include <limits.h>
int main()
{
    printf("Enter a Number: ");
    int N;
    scanf("%d", &N);
    int A[N], First_Min = INT_MAX, Second_Min = INT_MAX;
    printf("Enter Array Elements: \n");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
        if (A[i] < First_Min)
        {
            First_Min = A[i];
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (A[i] == First_Min)
        {
            continue;
        }
        else if (A[i] < Second_Min)
        {
            Second_Min = A[i];
        }
    }
    printf("Second Smallest Number: %d\n", Second_Min);

    return 0;
}
#include <stdio.h>
int main()
{
    int A[10], O[10], E[10];
    int i, j = 0, k = 0, n;
    printf("Please Enter the size of an array:\n");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (A[i] % 2 == 0)
        {
            E[j] = A[i];
            j++;
        }
        else
        {
            O[k] = A[i];
            k++;
        }
    }
    printf("Even element array is:\n");
    for (i = 0; i < j; i++)
    {
        printf("%d ", E[i]);
    }
    printf("\nOdd element array is:\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", O[i]);
    }
    return 0;
}

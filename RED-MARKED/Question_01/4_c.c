#include <stdio.h>
void Sort_Row_Wise(int X, int A[4][4])
{
    for (int j = 0; j < 3; j++)
    {
        for (int k = 0 + j; k < 4; k++)
        {
            if (A[X][j] > A[X][k])
            {
                int T = A[X][j];
                A[X][j] = A[X][k];
                A[X][k] = T;
            }
        }
    }
}
int main()
{
    int A[4][4];
    printf("Enter a Matrix of [4 x 4] Order: \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < 4; i++)
    {
        Sort_Row_Wise(i, A);
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
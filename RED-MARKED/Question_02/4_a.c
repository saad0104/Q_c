// Deleting an element from an array
#include <stdio.h>
int main()
{
    int a[100], i, j, DV, n, index;
    printf("\nEnter the array size:");
    scanf("%d", &n);
    printf("\nEnter the array element:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter the element you want to remove:");
    scanf("%d", &DV);
    index = n - 1;
    for (i = 0; i < n; i++)
    {
        if (a[i] == DV)
        {
            for (j = i + 1; j < n; j++)
            {
                a[j - 1] = a[j];
            }
            i--;
            index--;
        }
    }
    printf("\nArray after Deleting:");
    for (i = 0; i < n - 1; i++)
    {
        printf("\n%d", a[i]);
    }
    return 0;
}

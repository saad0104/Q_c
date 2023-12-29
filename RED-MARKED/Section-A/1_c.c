#include<stdio.h>
int main()
{
    int A[10],O[10],E[10];
    int i,j,k, n;
    printf("Please Enter the size of an array:\n");
    scanf("%d",&n);
    printf("Enter %d element:\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%ld", &A[i]);
        fflush(stdin);
    }
    for(i=0; i<n; i++)
    {
        if(A[i]%2==0)
        {
            E[j]=A[i];
            j++;
        }
        else
        {
            O[k]=A[i];
            k++;
        }
    }
    printf("Odd elememt array is:\n");
    for(i=0; i<j; i++)
    {
        printf("%ld\t",E[i]);
    }
    printf("\nOdd elememt array is:\n");
    for(i=0; i<k; i++)
    {
        printf("%ld\t",O[i]);
    }
    return 0;
}

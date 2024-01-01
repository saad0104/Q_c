#include <stdio.h>
int main()
{
 int n,i,x = 0,y = 0;
 int inp[100],even[100],odd[100];

  printf("Number of Elements=");
  scanf("%d",&n);

  printf("Enter Elements:");
  for(i=0;i<n;i++)
  {
  scanf("%d",&inp[i]);
  }


  for(i=0;i<n;i++)
  {
   if(inp[i]%2==0)
    {

      even[x]=inp[i];
      x++;

    }

    else if(inp[i]%2!=0)
    {

      odd[y]=inp[i];
      y++;
    }
  }
    printf("\nEven array is:");
    for(i=0;i<x;i++)
    {
      printf("%d ",even[i]);

    }

    printf("\nOdd array is:");
    for(i=0;i<y;i++)
    {
      printf("%d ",odd[i]);

    }

  return 0;
}


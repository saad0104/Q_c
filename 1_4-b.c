#include<stdio.h>
int main()
{

  int x,y,z;
  int i,j;

  printf("Input=");
  scanf("%d",&z);
  x=z;

 while(x>0)
 {
  y=x/10;
  x=x/10;

  if(y>0)
  {
 // printf("%d ",y);
    for(i=2;i<y;i++)
    {
       if(y%i==0)
       {
      // printf("%d is not prime\n",y);

       j=1;
       break;
       }
       else
       {
        // printf("%d is  prime\n",y);
         j=2;
       }
    }



  }
  }


 // printf(" %d",j);

  if(j==2)
  {
  printf("%d is super prime",z);
  }
  else if(j==1)
  {
  printf("%d is not super prime",z);
  }

return 0;
}

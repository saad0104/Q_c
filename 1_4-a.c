#include<stdio.h>
int main()
{
  int positiveSubstract(int x,int y)
  {
    x-y;
    return x-y;
  }
  int a,b;
  scanf("%d %d",&a,&b);

  while(a<=b)
  {
    printf("0");
    break;
  }
  while(a>=b)
  {
    printf("%d\n",positiveSubstract(a,b));
    break;
  }

}


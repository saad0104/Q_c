#include<stdio.h>
int maxCount(int list[],int length)
{
	int Global_Maximum=list[0];
    for(int i=1;i<length;i++)
{
	if(Global_Maximum<list[i])
		Global_Maximum = list[i];
}

int count=0;
for(int i=0;i<length;i++)
{
	if(Global_Maximum==list[i])
		count++;
}

printf("The global maximum is %d and it appears %d times.\n",Global_Maximum,count);

}

int main(){

	int n;
	printf("Enter the number of elements of the array : ");
	scanf("%d",&n);

	int a[n];
	printf("Enter the elements of the array:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Elements of Array are:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");


 maxCount(a,n);
return 0;
}

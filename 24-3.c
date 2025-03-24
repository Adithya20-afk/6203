#include<stdio.h>
int main()
{
	int a[100],i,n;
	printf("enter the length of the array :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter array[%d] =",i);
		scanf("%d",a);
	}
	printf("entered elements of array are\n");
	for (i=0;i<n;i++)
	{
		printf("array[i]=%d",a);
	}
	return 0;
}


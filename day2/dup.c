#include<stdio.h>
int main()
{
	int n,loc;
	printf("\nEnter the size of a array : ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter %d values : ",n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	int x;
	printf("\nEnter the number to be searched : ");
	scanf("%d",&x);
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
			loc=i;
	}
	printf("\nThe highest index of %d is %d \n",x,loc+1);
	return 0;
}


					

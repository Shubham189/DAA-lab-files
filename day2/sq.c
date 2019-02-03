#include<stdio.h>
int main()
{
	int n,loci,locj;
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
		for(int j=i;j<n;j++)
		{
			if((a[i]*a[i])+(a[j]*a[j])==x)
				loci=i;locj=j;
		}
	}
	printf("\nThe index is %d and %d \n",loci+1,locj+1);
	return 0;
}


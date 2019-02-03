#include<stdio.h>
int main()
{
	int n,loci,locj,lock;
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
				for(int k=j;k<n;k++)			
					if((a[i]+a[j]+a[k])==x)
					{loci=i;locj=j;lock=k;}
		}
	}
	printf("\nThe index is %d ,%d and %d \n",loci+1,locj+1,lock+1);
	return 0;
}


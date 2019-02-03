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
	int k;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			loc=i;
			break;
		}
	}
	printf("\nThe index is %d \n",loc+1);
	return 0;
}


					

#include<stdio.h>
int main()
{
	int n,t=1;
	printf("\nEnter the size of a array : ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter %d values : ",n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	{
		t*=a[i];
	}
	printf("\nThe array is : ");
	for(int i=0;i<n;i++)
	printf("%d ",t/a[i]);
	return 0;
}


					

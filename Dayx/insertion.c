#include<stdio.h>
void insertion(int a[],int n)
{
  int i,key,j;
  for(i=1;i<n;i++)
  {
  key=a[i];
  j=i-1;
  while(j>=0 && a[j]>key)
  {
    a[j+1]=a[j];
    j=j-1;
    }
    a[j+1]=key;
    }
    }
  void print(int a[],int n)
  {
   int i;
   for(i=0;i<n;i++)
   	printf("%d\t",a[i]);
   printf("\n");
   }
   int main()
   {
    int a[10],n,start,end;
    printf("\nEnter the no of elements : \n");
    scanf("%d",&n);
    printf("\nEnter the array values : ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    insertion(a,n);
    print(a,n);
    return 0;
    }
    

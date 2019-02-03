#include<stdio.h>
#include<time.h>
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
    printf("enter the no of elements\n");
    scanf("%d",&n);
    printf("enter the array values");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    start=clock();
    insertion(a,n);
    end=clock();
    print(a,n);
    printf("the time required in sorting is%d",start-end);
    return 0;
    }
    

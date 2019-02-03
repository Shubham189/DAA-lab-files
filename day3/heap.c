#include<stdio.h>
#include<time.h>
void heapsort(int a[],int n)
{
  int c;
  for(int i=0;i<n;i++)
  {
   c=i;
   do
   {
    root=(c-1)/2;
    if(heap(root)<heap[c])
    {
      int temp=heap[root];
      heap[root]=heap[c];
      heap[c]=temp;
      }
      c=root;
      
      }while(c!=0);
      }
    printf("heap array");
    for(int i=0;i<n;i++)
    printf("%d\t",heap[i]);
    for(int j=n-1;j>=0;j--)
    {
      int temp=heap[0];
      heap[0]=heap[j];
      heap[j]=temp;
      root=0;
      do
      {
      c=2*root+1;
      if(heap[i]<heap[c+1]&&c<j-1)
      c++;
      if(heap(root)<heap[c]&&c<j)
      {int temp=heap[root];
      heap[root]=heap[c];
      heap[c]=temp;
      }
      root=c;
      }while(c<j);
      }
      printf("\n the sorted array is:");
      for(int i=0;i<n;i++)
      printf("%d",heap[i]);
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
    heapsort(a,n);
    end=clock();
    print(a,n);
    printf("the time required in sorting is%d",start-end);
    return 0;
    }

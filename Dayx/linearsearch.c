#include<stdio.h>
#include<time.h>
int main()
{
  int a[10],search,c,n,start,end;
  printf("enter no of elements in array\n");
  scanf("%d",&n);
  printf("enter %d integer\n",n);
  for(c=0;c<n;c++)
  scanf("%d",&a[c]);
  printf("enter a no to search\n");
  scanf("%d",&search);
  start=clock();
  for(c=0;c<n;c++)
  {
  if(a[c]==search)
  {
   printf("%d is present at loc %d\n",search,c+1);
   break;
   }
   }
   end=clock();
   if(c==n)
   printf("%d isnt present in the array\n",search);
   printf("the time required in searching %d is %d",search,start-end);
   return 0;
   }

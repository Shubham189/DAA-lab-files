#include<stdio.h>
#include<stdlib.h>
char a[100];
int s[100];
void bubble(int e[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
           if(e[j]>e[j+1])
           {
              int tmp=e[j];
              char tmp1=a[j];
              int tmp2=s[j];
              e[j]=e[j+1];
              a[j]=a[j+1];
              s[j]=s[j+1];
              e[j+1]=tmp;
              a[j+1]=tmp1;
              s[j+1]=tmp2;
           }
        }
    }
}
void asp(int s[],int f[],int x[],int n)
{
  bubble(f,n);
  for(int i=1;i<n;i++)
  {
    x[i]=0;
  }
  x[0]=1;
  int j=0;
  for(int i=1;i<n;i++)
  {
    if(s[i]>=f[j])
    {
      x[i]=1;
      j=i;
    }
  }
}
int main()
{
  int n;
  printf("\nEnter the no of activities : ");
  scanf("%d",&n);

  int f[n],x[n];
  printf("\nEnter the activity , start time and end time respectively :\n");
  for(int i=0;i<n;i++)
  {
    scanf(" %c %d %d",&a[i],&s[i],&f[i]);
  }
  printf("\n");
  asp(s,f,x,n);
  printf("\n");
  printf("          Activity   Start      End\n");
  printf("          --------   -----      ---\n");
  for(int i=0;i<n;i++)
  {
    printf(" %10c %10d %10d\n",a[i],s[i],f[i]);
  }
  for (int i = 0; i < n; ++i)
  {
    printf("%d ",x[i]); 
  }
  printf("\n");
}

#include<stdio.h>
#include<stdlib.h>
struct node
{
int val;
int weight;
int pre;
struct node *next;
};

struct st
{
int val;
int comp;
int weight;
int pre;
};
void add(struct node **,int ,int *);
int main()
{
printf("\n enter the no. of nodes:");
int n;
scanf("%d",&n);
struct node **a=(struct node**)malloc(sizeof(struct node*));
}

void buildheap(int a[],int i,int hts)
{
for(i=hts/2;i>=0;i--)
{
heapify(a,i,hts);
}
}

void heapify(int a[],int i,int hts)
{
int lc=2*i;
int rc=(2*1)+1;
int small=i;
if(lc<=hts && point(a[lc]->weight)<point(a[small]->weight))
small=lc;
if(rc<=hts && point(a[rc]->weight)<point(a[small]->weight))
small=rc;
if(i!=small)
{
int temp=a[i];
a[i]=a[small];
a[small]=temp;
heapify(a,small,hts);
}
}



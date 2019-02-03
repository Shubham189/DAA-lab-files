#include<stdio.h>
#include<stdlib.h>
 typedef struct node{
  int v;
  int w;
  struct node *next;
  }nd;
   typedef struct adjacent{
   int s;
   int d;
   int w;
   }adj;
   
int main()
{
int n,i,c,t=0;
printf("\n  enter no. of nodes:");
scanf("%d",&n);
nd** a=(nd **)malloc(n*sizeof(nd *));
for(i=0;i<n;i++)
{
a[i]=NULL;
while(1)
{
printf("\n does node %d has anymore adjacent nodes?(0/1)",i);
printf("%d",&c);
if(c==0)
{
break;
}
else
{
t++;
nd *p=(nd *)malloc(sizeof(nd));
p->next=a[i];
printf("\n enter the node and weight:");
scanf("%d"&p->v);
scanf("%d",&p->w);
a[i]=p;
}
}
}
for(i=0;i<n;i++)
{
nd *p=a[i];
printf("%d",i);
while(p)
{
printf("->");
printf("|%d|",p->v);
printf("|%d|",p->w);
p=p->next;
}
printf("\n");
}
t=t/2;
printf("%d\n",t);
int j=0;
adj** s=(adj **)malloc(t*sizeof(adj *));
for(i=0;i<n;i++)
{
nd *p=a[i];
while(p)
{
if(p->v >i)
{
s[j]=(adj *)malloc(sizeof(adj));
s[j]->s=i;
s[j]->d=p->v;
s[j]->w=p->w;
j++;
}
p=p->next;
}
}
printf("\n generated!");
for(i=0;i<t;i++)]
{
if(i)
printf(",");
printf("\n|%d|%d|%d|",s[i]->s,s[i]->d,s[i]->w);
}
return 0;
}



#include<stdio.h>
#include<stdlib.h>
int hts=0;
struct node{
        struct node *left;
        char alpha;
        int freq;
        struct node *right;
};
void swap(struct node *a[],int m,int n)
{
  struct node *t=a[m];
            a[m]=a[n];
            a[n]=t;
            
}
  
        void heapify(struct node *a[],int i)
      {
        int lc=2*i+1;
        int rc=2*i+2;
        int small =i;
        if((lc<=hts && a[lc]->freq)<(a[small]->freq))
              {
               small=lc;
              }
        
        if((rc<=hts && a[rc]->freq)>(a[small]->freq))
            {
             small=rc;
            }
      
       if(small!=i)
           {
            swap(a,i,small);
            heapify(a,small);
           }
       }
      
void min_buildheap(struct node *a[])
{
int x;
x=hts/2;
while(x>=0)
  {
    heapify(a,x);
    x--;
   }
 }
 
 struct node* extract_min(struct node *a[])
 {
 struct node *new=a[0];
 a[0]=a[--hts];
 min_buildheap(a);
 return new;
 }
 
 
 
void insert(struct node *a[],struct node *p)
{
        a[hts]=p;
        min_buildheap(a);
} 
void huffman(struct node *a[])
 {
 min_buildheap(a);
 while(hts>=0)
        {
          struct node *p1=extract_min(a);
          struct node *p2=extract_min(a);
          struct node *p=create_node();
          p->char='x';
          p->left=p1;
          p->right=p2;
          p->freq=(p1->freq)+(p2->freq);
          insert(a,p);
         }
 }        
          
          void main()
        {
                int i;
                struct node **a=(struct node **)malloc(6*sizeof(struct node *));
                for(i=0;i<6;i++)
                {
                a[i]=(struct node *)malloc(sizeof(struct node));
                a[i]->left=NULL;
                a[i]->right=NULL;
                a[i]->alpha=65+i;
                scanf("%d",&(a[i]->freq));
                }
                printf("\n");
                for(i=0;i<6;i++)
                printf("%c\t%d\n",a[i]->alpha,a[i]->freq);
        }

#include<stdio.h>
int i, j, k,n,dist[10][10];
void floydWarshell ()
{
	for (k = 0; k < n; k++)
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				if (dist[i][k] + dist[k][j] < dist[i][j])
					dist[i][j] = dist[i][k] + dist[k][j];
}
int main()
{
	int i,j;
	printf("enter no of vertices :");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			printf("dist[%d][%d]:",i,j);
			scanf("%d",&dist[i][j]);
		}
	floydWarshell();
	printf (" \n\n shortest distances between every pair of vertices \n");
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++)
			printf ("%d\t", dist[i][j]);
		printf("\n");
	}
	return 0;
}

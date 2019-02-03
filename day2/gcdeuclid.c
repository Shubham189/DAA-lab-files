#include<stdio.h>
void main(){
	int m,n;
	printf("Enter 2 numbers : ");
	scanf("%d%d",&m,&n);
	while(n>0){
		int r = m%n;
		m = n;
		n = r;
	}
	printf("Gcd : %d",m);
}

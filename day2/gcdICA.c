#include<stdio.h>
void main(){
	int m,n,t;
	printf("Enter 2 numbers : ");
	scanf("%d%d",&m,&n);
	if(m>n)
		t = n;
	else
		t = m;
	while(t > 0){
    		if(m % t == 0 && n%t == 0){
        		printf("Gcd : %d",t);
        		break;
  		}
		else
			t--;
	}
}

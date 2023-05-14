#include<stdio.h>
int main(){
	int n;
	int arm=0;
	int r ,c;
	printf("enter any number");
	scanf("%d",&n);
	c=n;
	while(n>0){
		r=n%10;
		arm=(r*r*r)+arm;
		n=n/10;
	}
	if(c==arm)
		printf("arm number");
	
	else
	
		printf("not arm number");

	return 0;
}

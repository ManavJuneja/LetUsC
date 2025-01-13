#include<stdio.h>
#include<math.h>
int main(){
	int q,r,n,p,a,i;
	for(i=1; i<=10; i++){
	
	printf("\nEnter Principle : ");
	scanf("%d",&p);
	printf("Enter Rate of Interest : ");
	scanf("%d",&r);
	printf("Enter No. of Years : ");
	scanf("%d",&n);
	printf("Enter Compouting Time per year : ");
	scanf("%d",&q);
	a = p * pow((1 + r/q),*n*q));
	printf("Amount : %d\n",a);
}
return 0;
}


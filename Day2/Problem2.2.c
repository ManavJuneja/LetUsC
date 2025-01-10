#include<stdio.h>
#include<conio.h>
int main(){
	int n,n1,n2,n3,n4,n5;
	printf("Enter number : ");
	long revnum;
	scanf("%d",&n);
	n5 = n%10;
	n = n/10;
	n4 = n%10;
	n = n/10;
	n3 = n%10;
	n = n/10;
	n2 = n%10;
	n = n/10;
	n1 = n%10;
	n = n/10;
	revnum = n5*10000 + n4*1000 + n3*100 + n2*10 + n1;
	printf("Reversed Number is : %ld\n",revnum);
	return 0;
	
}

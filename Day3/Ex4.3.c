#include<stdio.h>
int main(){
	int n1,n2,n3,great;
	scanf("%d%d%d",&n1,&n2,&n3);
	great  = n1 > n2 ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);
	printf("Greatest number is: %d\n",great);
	return 0;
	
}

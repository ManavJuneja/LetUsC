#include<stdio.h>
int main(){
	int i = 3,*j,**k;
	j = &i;
	k = &j;
	printf("Address of i = %u\n",&i);
	printf("Address of i = %u\n",j);
	printf("Address of i = %u\n",*k);
	printf("Address of j = %u\n",&j);
	printf("Address of j = %u\n",k);
	printf("Address of k = %u\n",&k);
	printf("Value of i = %d\n",i);
	printf("Value of i = %d\n",*(&i));
	printf("Value of i = %d\n",*j);
	printf("Value of i = %d\n",**k);
	printf("Value of j = %d\n",j);
	printf("Value of k = %d\n",k);
	return 0;
}

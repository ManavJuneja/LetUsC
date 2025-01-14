#include<stdio.h>
int main(){
	int p = 3.14;
	int *q = &p;
	int **r = &q;
	printf("Add of p : %u\n",&p);
	printf("Add of p : %u\n",q);
	printf("Add of p : %u\n",*r);
	printf("Value of p : %d\n",p);
	printf("Value of p : %d\n",*q);
	printf("Value of p : %d\n",**r);
	printf("Value of p : %d\n",*(&p));
}

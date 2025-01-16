#include<stdio.h>
#include"interest.h"
int main(){
	int p,n;
	float si, amt, r;
	printf("Enter principle, no. of years and rate of interest");
	scanf("%d%d%f",&p,&n,&r);
	si = SI(p,n,r);
	amt = AMT(si,p);
	printf("%f %f",si,amt);
	return 0;
}

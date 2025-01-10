#include<stdio.h>
#include<conio.h>
int main(){
	float cp,sp,p,l;
	printf("Enter the Cost Prize : ");
	scanf("%f",&cp);
	printf("Enter the Selling Prize : ");
	scanf("%f",&sp);
	if(sp - cp == 0){
		printf("No Profit No Loss");
	}
	if(sp > cp){
		p = sp-cp;
		printf("Profit : %f",p);
	}else{
		l = cp - sp;
		printf("Loss : %f",l);
	}
	return 0;
	
}

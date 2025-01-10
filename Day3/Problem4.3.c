#include<stdio.h>
int main(){
	int side1, side2, side3, sum, ls;
	printf("Enter three side of the triangle : ");
	scanf("%d%d%d",&side1,&side2,&side3);
	if(side1 > side2){
		if(side1 > side3){
			sum = side2 + side3; ls=side1;
		}else{
			sum = side1 + side2; ls = side3;
		}
	}else{
		if(side2 > side3){
			sum = side1 + side3; ls = side2;
		}else{
			sum = side1 + side2; ls = side3;
		}
	}
	if(sum > ls){
		printf("Valid");
	}else{
		printf("Invalid");
	}
	return 0;
}

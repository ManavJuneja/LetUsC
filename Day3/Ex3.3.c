#include<stdio.h>
int main(){
	float angle1 ,angle2, angle3;
	printf("Enter angle of the triangle\n");
	scanf("%f%f%f",&angle1,&angle2,&angle3);
	if((angle1 + angle2 + angle3)==180){
		printf("Valid Triangle");
	}else{
		printf("Invalid Triangle");
	}
	return 0;
}

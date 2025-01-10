#include<stdio.h>
#include<math.h>
int main(){
	float angle,sum;
	printf("Enter value of Angle  ");
	scanf("%f",&angle);
	angle = angle*3.14/180;
	sum = pow(sin(angle),2)+pow(cos(angle),2);
	if(sum == 1){
		printf("Equal");
	}else{
		printf("Not equal");
	}
	
}

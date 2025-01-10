#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float x,y,r,theta;
	printf("Enter value of X and Y");
	scanf("%f%f",&x,&y);
	r = sqrt(x*x + y*y);
	theta = atan2(y,x);
	theta = theta *180/3.14;
	printf("r=%f theta=%f",r,theta);
	return 0;
	
	
}

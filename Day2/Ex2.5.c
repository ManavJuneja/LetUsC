#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	printf("Enter the angle : ");
	float angle,s,c,t;
	scanf("%f",&angle);
	angle  = angle * 3.14/180;
	s = sin(angle);
	c = cos(angle);
	t = tan(angle);
	printf("sin = %f cos = %f tan = %f",s,c,t);
	return 0;
	
}

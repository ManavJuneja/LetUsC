#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float a,b,c,s,area;
	printf("Enter 3 side of triangle\n");
	scanf("%f%f%f",&a,&b,&c);
	s = (a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area of triangle : %f\n",area);
	return 0;
}

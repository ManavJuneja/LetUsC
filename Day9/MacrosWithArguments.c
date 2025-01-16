#include<stdio.h>
#define AREA(x)(3.14 * x * x)
#define SQUARE(n) n * n
int i;
#define HLINE for(i = 0; i < 79; i++)\
printf("%c",196)
int main(){
	float r1 = 6.25, r2 = 2.5, a;
	a = AREA(r1);
	printf("Area of circle = %f\n",a);
	a = AREA(r2);
	printf("Area of circle = %f\n",a);
	a = SQUARE(4);
	printf("Square of 4 is : %f",a);
	HLINE;
	return 0;
}

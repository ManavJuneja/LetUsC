#include<stdio.h>
int main(){
	float farhD;
	float celD;
	scanf("%f",&farhD);
	celD = (farhD - 32) * 5 / 9;
	printf("In Celcius %.2f\n",celD);
	return 0;
}

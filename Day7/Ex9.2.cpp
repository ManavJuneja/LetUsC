#include<stdio.h>
void convert(float, float*,float*,float*);
int main(){
	float kg,gm,t,p;
	printf("Enter the weight : ");
	scanf("%f",&kg);
	convert(kg, &gm, &t, &p);
	printf("Kg = %f\n",kg);
	printf("Gm = %f Tons = %f Pounds = %f\n",gm,t,p);
	return 0;
}
void convert(float kg, float *g, float *t, float *p){
	*g = kg * 1000;
	*t = kg * 0.001;
	*p = kg * 2.204;
}


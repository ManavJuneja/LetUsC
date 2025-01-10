#include<stdio.h>
#include<conio.h>
int main(){
	float km,m,cm,ft,inch;
	printf("Enter Distance (in killometers)");
	scanf("%f",&km);
	m = km*1000;
    cm = m*100;;
	inch = cm/2.54;
	ft = inch/12;
	printf("In Meters %f\n",m);
	printf("In Centimeters %f\n",cm);
	printf("In Feet %f\n",ft);
	printf("In Inches %\n",inch);
	
	
}

#include<stdio.h>
#define PI 3.1415
int main(){
	float length, breadth, radius;
	float areaRectangle, perimeterRectangle;
	float areaCircle, circumCircle;
	scanf("%f%f%f", &length,&breadth,&radius);
	areaRectangle = length * breadth;
	perimeterRectangle = 2 *(length + breadth);
	areaCircle = PI * radius * radius;
	circumCircle = 2 * PI * radius;
	printf("Area Rectangle %f",areaRectangle);
	printf("Perimeter Rectangle %f",perimeterRectangle);
	printf("Area Circle %f",areaCircle);
	printf("Circumference Circle %f",circumCircle);
	return 0;
	
	
	
}

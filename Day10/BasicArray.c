#include<stdio.h>
int main(){
	int avg, sum = 0;
	int i;
	int num[6] = {2, 3, 5, 6, 7, 8};
	int n[] = {2, 4, 6, 3, 5, 2};
	float press[] = {12.3, 34.4, -23.1};
	long int gdp[10];
	int marks[5]; //array declaration
	for(i = 0; i <= 4; i++){
		printf("Enter marks\n");
		scanf("%d", &marks[i]);
	}
	for(i = 0; i <= 4; i++){
		sum = sum + marks[i];
	}
	avg = sum / 5;
	printf("\nAverage marks = %d",avg);
	return 0;
}

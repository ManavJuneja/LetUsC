#include<stdio.h>
int main(){
	int year;
	printf("Enter year");
	scanf("%d",&year);
	year % 100 == 0 ? (year % 400 == 0 ? printf("Leap year\n"):printf("Not a Leap year\n")):(year % 4 == 0 ? printf("Leap year\n"): printf("Not a Leap year\n"));
	return 0;
}

#include<stdio.h>
int leapYear(int);
int main(){
	printf("Enter year : ");
	int year;
	scanf("%d",&year);
	if(leapYear(year)){
		printf("Yes leap year");
	}else{
		printf("Not a leap year");
	}
}
int leapYear(int x){

	return x % 400 == 0 ? 1 : ((x % 100 != 0)? 0 : (x % 4 == 0) ? 1 : 0 );
}

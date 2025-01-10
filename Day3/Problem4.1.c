#include<stdio.h>
int main(){
	int year;
	printf("\nEnter the year : ");
	scanf("%d",&year);
	if(year % 400 == 0 || year % 100 != 0 && year % 4 == 0 ){
		printf("This is leap year");
		
	}else{
		printf("Not the leap year");
	}
}

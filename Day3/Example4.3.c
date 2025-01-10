#include<stdio.h>
int main(){
	char g;
	int yos, sal, qual;
	printf("Enter Gender, Year of Service and Qualification(0=G, 1=PG)");
	scanf("%c%d%d",&g,&yos,&qual);
	if(g=='M'){
		if(yos >= 10 && qual ==1){
			sal = 11000;
		}else if(yos >= 10 && qual==0 ){
			sal = 10000;
		}else if(yos <10 && qual== 1){
			sal =10000;
		}else{
			sal = 7000;
		}
	}else{
		if(yos >= 10 && qual ==1){
			sal = 12000;
		}else if(yos >= 10 && qual==0 ){
			sal = 90000;
		}else if(yos <10 && qual== 1){
			sal =10000;
		}else{
			sal = 6000;
		}
		return 0;
	}
	printf("Salary is : %d",sal);
}

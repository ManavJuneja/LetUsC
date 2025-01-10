#include<stdio.h>
int main(){
	int rage, sage, aage;
	scanf("%d%d%d",&rage,&sage,&aage);
	if(rage < sage){
		if(rage < aage){
			printf("Ram is youngest");
		}else{
			printf("Ajay is youngest");
		}
	}else{
		if(sage < aage){
			printf("Shyam is youngest");
		}else{
			printf("Ajay is youngest");
		}
	}return 0;
	
}

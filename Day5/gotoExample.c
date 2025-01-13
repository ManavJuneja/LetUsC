#include<stdio.h>
#include<stdlib.h>
int main(){
	int goal;
	printf("Enter the numer of goals scored against India");
	scanf("%d",&goal);
	if(goal <= 5){
		goto sos;
	}else{
		printf("About time soccer player learnt C\n");
		printf("and said goodbye to soccer\n");
		exit(1);
	}
	sos:
		printf("To err is human!\n");
		return 0;
}

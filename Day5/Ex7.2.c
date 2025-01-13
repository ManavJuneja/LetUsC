#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int cls,fa;
	printf("Enter the class of Student");
	scanf("%d",&cls);
	printf("Enter the no. subject failed");
	scanf("%d",&fa);
	switch(cls){
		case 1:
			if(fa > 3){
				printf("You don't get grace marks");
			}else{
				printf("You get grace marks 5 per subject");
			}
			break;
		case 2:
			if(fa > 2){
				printf("You don't get grace marks");
			}else{
				printf("You get grace marks 4 per subject");
			}
			break;
		case 3:
			if(fa > 1){
				printf("You don't get grace marks");
			}else{
				printf("You get grace marks 5 per subject");
			}
			break;
		default: 
			printf("Invaid data");
			break;
	}
	return 0;
}

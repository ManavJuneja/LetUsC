#include<stdio.h>
int main(){
	int n,pc,nc,zc;
	char ch = 'y';
	while(ch == 'y'||ch == 'Y'){
		printf("Enter the number : ");
		scanf("%d",&n);
		if(n < 0){
			nc++;
		}else if(n > 0){
			pc++;
		}else{
			zc++;
		}
		fflush(stdin);
		printf("Do you want to continue? ");
		scanf("%c",&ch);
	}
		
			printf("Count of Postive Number : %d",pc);
			printf("Count of Negative Number : %d",nc);
			printf("Count of Zeros : %d",zc);
	
	return 0;
}

#include<stdio.h>
int main(){
	printf("\nEnter value of x and y");
	int x, y;
	scanf("%d%d",&x,&y);
	if(x == 0 && y == 0){
		printf("Point on origin");
	}else{
		if(x == 0 && y!=0){
			printf("Pointn on Y axis\n");
		}else{
			printf("Point onn X axis\n");
		}
	}
	return 0;
}

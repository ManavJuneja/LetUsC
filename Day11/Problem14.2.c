#include<stdio.h>
int main(){
	int a[3][5]= {
			1, 2, 3, 4, 5, 
			 6, 7, 8, 9, 10, 
			 11, 12, 13, 14, 15	
	};
	int trans [5][3];
	int i,j;
	for(i=0; i<=2; i++){
		for(j = 0; j <= 4; j++){
			trans[j][i]= a[i][j];
		}
	}
	for(i=0; i<=4;i++){
		for(j=0; j<=2; j++){
			printf("%d ",trans[i][j]);
		}
		printf("\n");
	}
	return 0;
}

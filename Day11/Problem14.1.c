#include<stdio.h>
int main(){
	int a[5][5]= {
	{ 11, 1, 7, 9, 7 }, 
 	{ 13, 54, 56, 2, 5 }, 
 	{ 23, 43, 89, 22, 13 }, 
 	{ 14, 15, 17, 16, 19 }, 
 	{ 45, 3, 6, 8, 10 }
	};
	int i,j,max;
	max = 0;
	for(i = 0; i <= 4; i++){
		for(j = 0; j <= 4; j++){
			if(a[i][j] > max ){
				max = a[i][j];
			}
		}
	}
	printf("Largest number in matrix is %d",max);
}

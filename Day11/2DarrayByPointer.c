#include<stdio.h>
int main(){
	int s[4][2]={
	{12,1},{13,2},{14,3},{15,4}
	};
	int i,j;
	for(i = 0; i<=3; i++){
		for(j = 0; j<=1; j++){
			printf("%d",*(*(s+i)+j));
		}
		printf("\n");
	}
	return 0;
}

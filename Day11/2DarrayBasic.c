#include<stdio.h>
int main(){
	int s[4][2]={
	{12,1},{13,2},{14,3},{15,4}
	};
	int i;
	for(i = 0; i<=3; i++){
		printf("Address of %d th 1-D Array = %u\n",i,s[i]);
	}
	return 0;
}

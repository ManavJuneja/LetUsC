#include<stdio.h>
int main(){
	int num[]= { 1,2,3,4,5};
	int i, *ptr;
	ptr = &num[0];
	for(i = 0; i <= 4; i++){
		printf("address = %u element = %d\n",ptr,*ptr);
		ptr++;
	}
	return 0;
}

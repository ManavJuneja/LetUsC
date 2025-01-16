#include<stdio.h>
#define NUMBER 1
int main(){
	#if (NUMBER == 0)
	printf("Value of number is : %d",NUMBER);
	#elif NUMBER >= 1
	printf("Value of number is : %d",NUMBER);
	#endif
	return 0;
}

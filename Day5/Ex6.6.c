#include<stdio.h>
#include<math.h>
int main(){
	int pop,i;
	float p,r;
	r = 10;
	p = 10000;
	for(i=1; i<=10; i++){
		pop = p / pow((1 + r/100),i);
		printf("Population %d years ago = %d\n ",i,pop);
	}
	return 0;
}

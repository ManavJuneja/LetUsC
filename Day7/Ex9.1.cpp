#include<stdio.h>
void cirsh(int *, int*, int*);
int main(){
	int x,y,z;
	x = 5,y=8,z=10;
	cirsh(&x,&y,&z);
	printf("X = %d Y = %d Z = %d",x,y,z);
	return 0;
}
void cirsh(int *a, int *b, int *c){
	int temp;
	temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}

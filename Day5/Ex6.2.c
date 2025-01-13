#include<stdio.h>
int main(){
	float y,x,i;
	for(y = 1; y <= 6; y++){
		for(x = 5.5; x <=12.5; x+=0.5){
			printf(" i = %f = %d + (%f + 0.5 * %f)\n",2+(y+0.5*x),2,y,x);
	
		}
	}
	return 0;
}

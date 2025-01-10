#include<stdio.h>
int main(){
	int length = 5 , breadth = 4;
	float area, perimeter;
	area = length * breadth;
	perimeter = 2 * (length + breadth);
	if(area < perimeter){
		printf("area if more them perimeter");
	}else{
		printf("perimeter is more then area");
	}
}

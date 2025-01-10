#include<stdio.h>
#include<conio.h>
int main(){
	int length = 1189, breadth = 841;
	int i;
	printf("Pages Size from A0 to A8\n");
	for(i = 0; i<8; i++){
		printf("A%d : %dmm X %dmm\n",i,length,breadth);
		if(length > breadth){
			length = length / 2;
		}else{
			breadth = breadth / 2;
		}
	}
	return 0;
}

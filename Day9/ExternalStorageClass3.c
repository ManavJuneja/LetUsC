#include<stdio.h>
int x;
x = 10;
void display();
int main(){
	int x;
	x = 20;
	printf("%d\n",x);
	display();
}
void display(){
	printf("%d\n",x);
}

#include<stdio.h>
int i;
void increment();
void decrement();
int main(){
	printf("%d\n",i);
	increment();
	increment();
	decrement();
	decrement();
}
void increment(){
	i = i + 1;
	printf("On increment i = %d\n",i);
}
void decrement(){
	i = i - 1;
	printf("On decrement i = %d\n",i);
}

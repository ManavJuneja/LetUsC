#include<stdio.h>
#include<conio.h>
int main(){
	int amount,hun,fiv,ten,two,one,total;
	printf("Enter amount : ");
	scanf("%d", &amount);
	hun = amount/100;
	amount = amount%100;
	fiv = amount/50;
	amount = amount%50;
	ten = amount/10;
	amount = amount%10;
	two = amount/2;
	amount = amount % 2;
	one = amount /1;
	amount = amount /1;
	total = hun + fiv + ten + two + one;
	printf("Total number of notes is : %d",total);
	return 0;
	
}

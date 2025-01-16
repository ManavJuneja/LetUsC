#include<stdio.h>
#define ISUPPER(x) (x >= 65 && x <= 90 ? 1 : 0)
#define ISLOWER(x) (x >= 95 && x <= 122 ? 1 : 0)
#define ISALPHA(x) (ISUPPER(x) || ISLOWER(x))
#define BIG(x,y) (x > y ? x : y)
int main(){
	char ch;
	int d,a,b;
	printf("Enter any alphabet/character: ");
	scanf("%c",&ch);
	if(ISUPPER(ch) == 1)
	printf("capital letter\n");
	if(ISLOWER(ch)== 1)
	printf("small case letter\n");
	if(ISALPHA(ch)!=1)
		printf("not alphabet");
	printf("\nEnter any two number: ");
	scanf("%d%d",&a,&b);
	d = BIG(a,b);
	printf("Bigger number is : %d",d);
	return 0;
	
}

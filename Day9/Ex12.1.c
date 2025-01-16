#include<stdio.h>
#define MEAN(x,y) ((x + y)/2)
#define ABS(x) (x < 0 ? x * -1:x)
#define TOLOWER(x) (x + 32)
#define BIG(x, y, z) (x > y && x > z ? x : y > x && y > z ? y : z)
int main(){
	char ch;
	int d, a, b, c ;
	printf ( "\nEnter any two numbers: " ) ;
	scanf ( "%d %d", &a, &b ) ;
	d = MEAN ( a, b ) ; /* Macro substitution */
	printf ( "Mean is %d\n", d ) ;
	printf ( "\nEnter any number: " ) ;
	scanf ( "%d", &a ) ;
	d = ABS ( a ) ;
	printf ( "Absolute value is %d\n", d ) ;
	fflush ( stdin ) ;
	printf ( "\nEnter any upper case character: " ) ;
	scanf ( "%c", &ch ) ;
	ch = TOLOWER ( ch ) ;
	printf ( "Lower case character is %c\n", ch ) ;
	printf ( "\nEnter any three numbers: " ) ;
	scanf ( "%d %d %d", &a, &b, &c ) ;
	d = BIG ( a, b, c ) ;
	printf ( "Big number is: %d\n", d ) ;
	return 0 ;
}



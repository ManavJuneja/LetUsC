#include<stdio.h>
#include<math.h>
int main(){
	float t,a[6],b[6],angle[6],area[6],largest=0.0;
	int i,plot;
	for(i = 0;i <= 5; i++){
		printf ( "\nEnter the values of the following data:" ) ;
		printf ( "\na%d = ", i + 1 );
		scanf ( "%f", &a[ i ] );
		printf ( "\nb%d = ", i + 1 );
		scanf ( "%f", &b[ i ] );
		printf ( "\nangle%d = ", i + 1 );
		scanf ( "%f", &angle[ i ] );
		area[i] = (1.0 / 2) * a[i] * b[i] *sin(angle[i]);
		if(area[i]>largest){
			largest = area[i];
			plot = i;
		}
	}
	printf ( "\n\nEntered Plot dimensions and Area is:\n" ) ;
	printf ( "\nPlot No.\ta\tb\tAngle\tArea" );
	for ( i = 0 ; i <= 5 ; i++ )
	{
		printf ( "\n%d\t\t%.2f\t%.2f\t%.2f\t%.3f ", i+1, a[ i ], b[ i ], 
		angle[ i ], area[ i ] ) ;
	}
	printf ( "\n\nLargest Triangular Area = %.3f:", largest ) ;
	printf ( "\n\na = %.2f\tb = %.2f\tangle = %.2f ", a[ plot ], b[ plot ], 
	angle[plot] ) ;
	return 0 ;
}

#include<stdio.h>
int main(){
int mat1[ 3 ][ 3 ], mat2[ 3 ][ 3 ], mat3[ 3 ][ 3 ], i, j, k, sum ;

printf ( "\nEnter values for first 3 x 3 matrix:\n" ) ;
for ( i = 0 ; i <= 2 ; i++ )
{
for ( j = 0 ; j <= 2 ; j++ )
scanf ( "%d", &mat1[ i ][ j ] ) ;
}
printf ( "\nEnter values for second 3 x 3 matrix:\n" ) ;
for ( i = 0 ; i <= 2 ; i++ )
{
for ( j = 0 ; j <= 2 ; j++ )
scanf ( "%d", &mat2[ i ][ j ] ) ;
}
for ( i = 0 ; i <= 2 ; i++ )
{
for ( j = 0 ; j <= 2 ; j++ )
{
sum = 0 ;
for ( k = 0 ; k <= 2 ; k++ )
sum = sum + mat1[ i ][ k ] * mat2[ k ][ j ] ;
mat3[ i ][ j ] = sum ;
}
}
printf ( "\nThe product of the above two matrices is:\n" ) ;
for ( i = 0 ; i <= 2 ; i++ )
{
for ( j = 0 ; j <= 2 ; j++ )
printf ( "%d\t", mat3[ i ][ j ] ) ;
printf ( "\n" ) ;
}
return 0 ;
	
}

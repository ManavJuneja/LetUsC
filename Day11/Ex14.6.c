#include<stdio.h>
int main(){
	int mat1[6][6],mat2[6][6],mat3[6][6],i,j;
	printf("\n Enter value for first 6 X 6 matrix:\n");
	for(i = 0; i <= 5; i++){
		for(j = 0; j <= 5; j++){
			scanf("%d",&mat1[i][j]);
		}	
	}
	printf("\nEnter values for secong 6 X 6 matrix: \n");
	for(i=0; i <= 5; i++){
		for(j = 0; j <= 5; j++){
			scanf("%d",&mat2[i][j]);
		}
	}
	printf("\nMatrices entered by you are : \nMatrix 1: \n");
	for(i = 0; i <=5; i++){
		for(j = 0; j<=5; j++){
			printf("%d\t",mat1[i][j]);
		}
		printf("\n");
	}
	printf("\nMatrix 2:\n");
	for(i=0; i<=5; i++){
		for ( j = 0 ; j <= 5 ; j++ )
		printf ( "%d\t", mat2[ i ][ j ] ) ; /* print each row */
		printf ( "\n" ) ; 
	}
	printf ( "\nMatrices entered by you are: \nMatrix 1:\n" ) ;
for ( i = 0 ; i <= 5 ; i++ )
{
	for ( j = 0 ; j <= 5 ; j++ )
	printf ( "%d\t", mat1[ i ][ j ] ) ; /* print each row */
	printf ( "\n" ) ; /* new row on new line */
}
	printf ( "\nMatrix 2:\n" ) ;
for ( i = 0 ; i <= 5 ; i++ )
{
	for ( j = 0 ; j <= 5 ; j++ )
	printf ( "%d\t", mat2[ i ][ j ] ) ; /* print each row */
	printf ( "\n" ) ; /* new row on new line */
}

for ( i = 0 ; i <= 5 ; i++ )
{
	for ( j = 0 ; j <= 5 ; j++ )
	mat3[ i ][ j ] = mat1[ i ][ j ] + mat2[ i ][ j ] ;
}

	printf ( "\nThe new matrix after addition of the above two matrices is:\n" ) ;
for ( i = 0 ; i <= 5 ; i++ )
{
	for ( j = 0 ; j <= 5 ; j++ )
	printf ( "%d\t", mat3[ i ][ j ] ) ;
	printf ( "\n" ) ;
}
	return 0 ;
}

	


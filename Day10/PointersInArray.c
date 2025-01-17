#include<stdio.h>
int main(){
	int arr[] = {10, 20, 30, 40, 50, 60, 70,};
	int i = 4, *j, *k, *x, *y;
	j = &i;
	printf("j : %d\n",j);
	j = j + 9; //pointer plus
	printf("j + 9 : %d\n",j);
	k = &i;
	printf("k : %d\n",k);
	k = k -3;//pointer minus;
	printf("k - 3 : %d\n",k);			
	x = &arr[1];
	printf("x : %d\n",x);
	y = &arr[5];
	printf("y : %d\n",y);
	printf("y - x : %d\n",y-x);
	j = &arr[4];
	printf("j arr of 4 : %d\n",j);
	k = (arr + 4);
	printf("k + 4 : %d\n",k);
	if(j == k){
		printf("The two point to same location\n");
	}else{
		printf("different location\n");
	}
	return 0;
}

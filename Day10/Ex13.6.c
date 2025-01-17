#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int arr[]={-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2};
	int n = 15,i;
	float sum, xi, std, mean = 0;
	sum = 0;
	for(i = 0; i <=14; i++){
		sum = sum + arr[i];
	}
	mean = sum / n;
	for(i = 0; i <= 14; i++){
		sum = sum + pow((arr[i]-mean),2);
	}
	std = sqrt(sum)/n;
	for(i = 0; i<=14; i++){
		printf("%d\t",arr[i]);
	}
	printf("\nMean = %f\n",mean);
	printf("Standard Deviation = %f\n",std);
	return 0;
	
}

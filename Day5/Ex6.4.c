#include<stdio.h>
#include<math.h>
int main(){
	float x,ans;
	int i;
	printf("Enter Value of X : ");
	scanf("%d",&x);
	ans += (x-1.0)/x;
	for(i = 1; i <= 7; i++){
		ans += (pow((x-1.0),i)/x)/2.0;
	}
	printf("Answer is : %d",ans);
}

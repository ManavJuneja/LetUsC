#include<stdio.h>
int main(){
	float otpay;
	int hrs,i=1;
	while(i <= 10){
		printf("Enter Hours Worked : ");
		scanf("%d",&hrs);
		if(hrs >= 40){
			otpay = (hrs - 40) * 120;
			printf("Over time pay is : %f\n",otpay);
		}else{
			printf("No overtime done\n");
		}
	}
	return 0;
}

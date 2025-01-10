#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float L1,L2,G1,G2,dis;
	printf("Enter the Latitude : ");
	scanf("%f%f",&L1,&L2);
	L1 = L1 * 3.14/180;
	L2 = L2 * 3.14/180;
	printf("Enter the Logitude : ");
	scanf("%f%f",&G1,&G1);
	G1 = G1 * 3.14/180;
	G2 = G2 * 3.14/180;
	dis=3963 * acos(sin(L1)*sin(L2)+cos(L1)*cos(L2)*cos(G2-G1));
	printf("Distance is : %f",dis);
	return 0;
}

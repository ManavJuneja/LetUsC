#include<stdio.h>
int main(){
	int ms = 21,u,c;
	while(1){
		printf("\nNumber of Match Stick Left : %d\n",ms);
		printf("Pick from 1 to 4 match stick : ");
		scanf("%d",&u);
		if(u>4 || u<1){
			printf("Invalid Pick\n");
			continue;
	}
		ms -= u;
		
		printf("No. of matchstick left : %d\n",ms);
		c = 5 - u;
		printf("Computer Picked : %d\n",c);
		ms -=  c;
		if(ms == 1){
			printf("No. of matchstick left : %d\n\n",ms);
			printf("You lost the games !! \n");
			break;
		}
	}
	return 0;
}

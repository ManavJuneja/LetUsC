#include<stdio.h>
int main(){
	char *names[]={
			"akshay","parag","raman",
			"srinivas","gopal","rajesh"
	};
	int i;
	char t;
	char *temp;
	printf("Original : %s %s\n",&names[2][0], &names[3][0]);
//	//old approach
//	for(i = 0; i <= 19; i++){
//		t = names[2][i];
//		names[2][i] = names[3][i];
//		names[3][i]=t;
//	}
	//new approach
	temp = names[2];
	names[2]=names[3];
	names[3]=temp;
	printf("New %s %s\n",&names[2][0], &names[3][0]);
	return 0;
}

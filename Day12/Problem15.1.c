#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char str[]= "Working with strings is fun", ans[25];
	char *s, *t;
	int pos, n, i;
	printf("Enter position and no. of characters to extract : ");
	scanf("%d%d",&pos,&n);
	s = str;
	t = ans;
	if(pos < 0 || pos > strlen(str)){
		printf("Invalid Position");
		exit(1);
	}
	if(n < 0){
		n = 0;
	}
	if(n > strlen(str)){
		n = n - strlen(str) -1;
	}
	s = s + pos;
	for(i = 0; i < n; i++){
		*t = *s;
		s++;
		t++;
	}
	*t = '\0';
	printf("The substring is : %s\n",ans);
	return 0;
}

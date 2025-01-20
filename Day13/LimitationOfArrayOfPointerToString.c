#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char *names[6], n[50];
	int len, i;
	char *p;
	for(i=0; i<=5; i++){
		printf("Enter name : \ns");
		scanf("%s",n);
		len = strlen(n);
		p = (char *)malloc(len + 1); //+1 for accomodate '\0'
		strcpy(p,n);
		names[i] = p;
	}
	for(i = 0; i <=5; i++){
		printf("%s",names[i]);
	}
	return 0;
}

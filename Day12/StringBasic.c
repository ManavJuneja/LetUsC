#include<stdio.h>
int main(){
	char name[] = "Klinsman";
	int i = 0;
	//Version 1
	while(name[i] != '\0')
	{
		printf("%c",name[i]);
		i++;
	}
	printf("\n");
	//Version 2
	char *ptr;
	ptr = name;
	while(*ptr != '\0'){
		printf("%c",*ptr);
		ptr++;
	}
	printf("\n");
	return 0;
}

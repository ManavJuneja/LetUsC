#include<stdio.h>
#include<string.h>
void xstrcpy(char *, char*);
int main(){
	char source[] = "Sayonara", target[20];
//	strcpy(target,source);
	xstrcpy(target,source);
	printf("source string %s\n",source);
	printf("target string %s\n",target);
	return 0;
}
void xstrcpy(char *t, char *s){
	while(*s != '\0')
	{
		*t = *s; s++, t++;
	}
	*t='\0';
}

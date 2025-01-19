#include<stdio.h>
#include<string.h>
void xstrcat(char *,char *);
int main(){
	char source[] = "Folks!", target[30]= "Hello ";
	xstrcat(target,source);
	printf("source string : %s\n",source);
	printf("target string : %s\n",target);
	return 0;
}
void xstrcat(char *t , char *s){
	while(*t != '\0'){
		*t++;
	}
	while(*s != '\0'){
		*t = *s ;
		t++;
		s++;
	}
	*t = '\0';
}

#include<stdio.h>
#include<string.h>
int main(){
	char str[80], str1[80];
	char *s, *q, *p;
	int i;
	printf("\nEnter a sentence not more that 80 chars long\n");
	gets(str);
	s = str;
	p = str1;
	while(*s){
		q = s;
		if(*s == 't' || *s == 'T'){
			s++;
			if(*s == 'h'){
				s++;
				if(*s == 'e') 
				;
			else{
				for(i = 0; i <= 2; i++){
					*p++ = *q++;
				}
			}
		}
			else{
				*p++ = *q++;
				s--;
			}
		
		}
		else{
			*p++ = *s;
		}
		s++;
	}
	*p = '\0';
	printf("\nSentence after deleting all 'the' is :\n");
	puts(str1);
	return 0;
}

#include<stdio.h>
#include<string.h>
int xstrlen(char *);
int main(){
	char arr[]="Bamboozled";
	int len1, len2;
	len1 = xstrlen(arr);
	len2 = strlen("Humpty Dumpty");
	printf("string = %s length = %d\n", arr, len1);
	printf("string = %s length = %d\n","Humpty Dumpty", len2);
	return 0;
}
int xstrlen(char *s){
	int length = 0;
	while(*s != '\0'){
		length++;
		s++;
	}
	return length;
}

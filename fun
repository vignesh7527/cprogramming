#include<stdio.h>
int main(){
	char s[]="programming is fun";
	int i ;
	for(i=0;s[i]!='\0';++i);
	printf("length of string:%d",i);
	return 0;
	

#include<stdio.h>

/* Write a function reverse(s) that reverses the character string s. Use it to write a program that reverses its input a line at a time. */

#define MAXSIZE 1000

void reverse(char str[],int len);
int getALine(char str[],int max);

int main(){
	int len,c;
	char word[MAXSIZE];
	
	len = 0;
	
	while((len = getALine(word,MAXSIZE)) > 0){
		reverse(word,len);
	}
	return 0;
}

int getALine(char str[],int max){
	int i,c;
	
	for ( i = 0; ((c = getchar()) != EOF) && i < (max-1) && (c != '\n'); i++){
		str[i] = c;
	}
	if (c == '\n')
		str[i] = '\0';
	return i;
}

void reverse(char str[],int len){
	int i;
	for (i = (len-1); i >= 0; i--)
		printf("%c",str[i]);
	printf("\n");
}

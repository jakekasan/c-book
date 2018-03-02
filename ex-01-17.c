#include <stdio.h>

/* Write a program to print all input lines that are longer than 80 characters. */

#define MAXLINE 1000

int count_chars(char s[],int max);

int main(){
	int len;
	char line[MAXLINE];
	char longest[MAXLINE];
	
	while((len = count_chars(line,MAXLINE)) > 0)
		if (len > 80) {
			printf("%s",line);
		}
	return 0;	
}

int count_chars(char s[],int lim){
	int c, i;
	
	for (i=0; (i < lim-1) && ((c = getchar()) != EOF) && (c != '\n'); i++)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return i;
}

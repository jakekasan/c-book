#include <stdio.h>

/* Write a program that prints its input one word per line */

#define IN 1
#define OUT 0

int main(){
	int c;
	int state = OUT;
	while((c = getchar()) != EOF){
		if (c != ' ' && c != '\n' && c != '\t')
			printf("%c",c);
		else
			printf("\n");					
	}
	
	return 0;
}
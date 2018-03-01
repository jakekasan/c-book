#include <stdio.h>

/* Write a program to print the value of EOF */

int main(){
	
	int c;
	
	while (c != EOF)
		c = getchar();
			
	printf("EOF is %d",c);
	
	return 0;
}
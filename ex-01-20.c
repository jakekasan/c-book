#include <stdio.h>

#define tabsize 8;

int main(){
	int c;
	
	
	// get a line
	while ((len = getaline()) > 0){
		if (c != '\t')
			putchar(c);
		else {
			putchar(' ');
			putchar(' ');
			putchar(' ');
			putchar(' ');
			putchar(' ');
			putchar(' ');
		}
	}
	
	return 0;
}

char myline(char str[], int max){
	int c;
	for ((c = getchar()) != EOF){
		if (c != '\t')
			putchar(c);
			// str[i] = c;
		else {
			
			str[i] = ' ';
			str[i++] = ' ';
			str[i++] = ' ';
			str[i++] = ' ';
			
			putchar(' ');
			putchar(' ');
			putchar(' ');
			putchar(' ');
		}
	}
	
	return(str);
}

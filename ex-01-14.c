#include <stdio.h>

/* Write a program to print a histogram
of the frequencies of different characters
in its input */

int main(){
	int chars['z'-'a'];
	int c;
	
	//printf("%d",('z'-'a'));
	
	for (int i = 0; i < ('z'-'a'+1); i++){
		chars[i] = 0;
	}
	
	while ((c = getchar()) != EOF){
		if (c <= 'z' && c >= 'a') {
			chars[(c-'a')] = chars[(c-'a')] + 1;
		}
	}
	
	printf("\n");
	
	for (int i = 0; i < ('z'-'a'); i++){
		printf("%c: %d, ",(i+'a'),chars[i]);
	}
	
	return 0;
}
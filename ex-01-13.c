#include <stdio.h>

/* write a program to  print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bards horizontal; a vertical orientation is more challenging. */

#define IN 1
#define OUT 0

int main(){
	int lengths[20];
	int c,lc,state,i;
	for (i = 0; i < 20; i++){
		lengths[i] = 0;
	}
	
	lc = 0;
	state = OUT;
	
	while ((c = getchar()) != EOF){
		if (c != '\t' && c != '\n' && c != ' '){
			state = IN;
			++lc;
		} else if (state == IN) {
			lengths[lc-1] = lengths[lc-1] + 1;
			lc = 0;
			state = OUT;
		}
	}
	
	for (i = 0; i < 20; i++){
		printf("%d ",lengths[i]);
	}
	
	
	return 0;
	
}
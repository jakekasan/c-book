#include <stdio.h>

int main(){
	int count,c;
	count = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n' || c == '\t' || " ")
			count++;
	
	printf("Final count is %d\n",count);
	return 0;
}
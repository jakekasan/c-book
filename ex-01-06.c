#include <stdio.h>

/* verify that the expression getchar() != EOF is 0 or 1 */

int main(){
	int c;
	while ((c = getchar()) != EOF)
		printf("Value is %d",(c != EOF));
	printf("Value is %d",(c != EOF));
	return 0;
}
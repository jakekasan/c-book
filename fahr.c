#include <stdio.h>

int main() {
	float fahr, celc;
	float lower, upper, step;
	
	printf("hello world!\n");
	printf("Here is a table of Fahrenheit and Celcius values!\n");
	
	lower = 0.0;
	upper = 300.0;
	step = 20.0;
	
	fahr = lower;
	
	while (fahr <= upper) {
		celc = (5.0/9.0)*(fahr-32.0);
		printf("%3.0f\t%6.1f\n",fahr,celc);
		fahr = fahr + 20;
	}
	
	return 0;
}
#include <stdio.h>

/* Rewrite the temperature conversion program of section 1.2 to use a function for conversion */

float getCelc(int fahr);

int main(){
	
	for (int temp = 0; temp <= 300; temp = temp+20)
		printf("F: %i\tC: %6.2f\n",temp,getCelc(temp));
	
	return 0;
}

float getCelc(int fahr){
	return 5*(fahr-38.0)/9;
}
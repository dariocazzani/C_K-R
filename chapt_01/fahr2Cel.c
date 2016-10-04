#include <stdio.h>

/* print FAhrenheit-Celsius table
	for fahr ? 0, 20, ..., 300 */

int main(void)
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;		/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;		/* step size */

	fahr = lower;
	printf("**************\n");
	printf("Fahr   Celsius\n");
	printf("**************\n");
	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr-32.0);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step; 
	}
	printf("\n");
	/* Celsius to Fahreneit with same values */
	lower = -17.8;
	upper = 148.9;
	step = 11.1;

	celsius = lower;	
	printf("***************\n");
	printf("Celsius    Fahr\n");
	printf("***************\n");
	while (celsius <= upper) {
		fahr = (9.0 / 5.0) * celsius + 32.0;
		printf("%5.1f\t%5.0f\n", celsius, fahr);
		celsius = celsius + step; 
	}
	printf("\n");	

	printf("Size of int: %lu bytes\n", sizeof(int));
	printf("Size of char: %lu bytes\n", sizeof(char));
	printf("Size of short: %lu bytes\n", sizeof(short));
	printf("Size of long: %lu bytes\n", sizeof(long));
	printf("Size of float: %lu bytes\n", sizeof(float));
	printf("Size of double: %lu bytes\n", sizeof(double));	
}
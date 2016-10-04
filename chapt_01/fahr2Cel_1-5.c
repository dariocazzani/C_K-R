#include <stdio.h>

#define	LOWER 0 	/* lower limit of table */
#define UPPER 300	/* upper limit*/
#define STEP 20		/* step size*/
/* print FAhrenheit-Celsius table
	for fahr ? 0, 20, ..., 300 */

int main(void)
{
	float fahr;

	printf("**************\n");
	printf("Fahr   Celsius\n");
	printf("**************\n");

	for (fahr = UPPER; fahr >= LOWER; fahr-= STEP)
		printf("%3.0f\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
	printf("\n");
}
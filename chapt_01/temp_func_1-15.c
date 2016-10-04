#include <stdio.h>

#define LOWER 0
#define STEP  20
#define UPPER 200
float fahr2celsius(float);

int main(void)
{
	float fahr;

	printf("**************\n");
	printf("Fahr   Celsius\n");
	printf("**************\n");
	for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {
		printf("%3.1f\t%3.1f\n", fahr, fahr2celsius(fahr));
	}
	return 0;
}

float fahr2celsius(float f)
{
	return (5.0 / 9.0) * (f - 32.0);
}
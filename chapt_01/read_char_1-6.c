#include <stdio.h>

/* copy input to output; 1-6 */
int main(void)
{
	int c;

	c = getchar();
	while (c != EOF) {
		printf("c != EOF: %d\n", c != EOF);
		putchar(c);
		c = getchar();	
	}
	printf("c != EOF: %d\n", c != EOF);
	printf("Received EOF: %d\n",EOF);
}
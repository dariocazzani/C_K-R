#include <stdio.h>

int main(void)
{
	int c;
	int	num_blanks = 0;
	
	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++num_blanks;
		else {
			if (num_blanks > 0) {
				putchar(' ');
				putchar(c);
				num_blanks = 0;
			}
			else
				putchar(c);
		}
	}
}
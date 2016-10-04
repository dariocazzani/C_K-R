#include <stdio.h>

#define MAX_LENGTH 26

int main(void)
{
	int lengths[MAX_LENGTH];
	int word_length = 0;
	int c, i, j;

	// init lengths array
	for (i = 0; i < MAX_LENGTH; ++i)
		lengths[i] = 0;

	while((c = getchar()) != EOF)
		if (c >= 'a' && c <= 'z') 
			++lengths[c - 'a'];

	for (i = 0; i < MAX_LENGTH; ++i) {
		printf("length %c ", i + 'a');
		for (j = 0; j < lengths[i]; ++j)
			printf("*");
		printf("\n");
	}
}
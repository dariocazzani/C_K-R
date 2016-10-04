#include <stdio.h>

#define MAX_LENGTH 20

int main(void)
{
	int lengths[MAX_LENGTH];
	int word_length = 0;
	int c, i, j;

	// init lengths array
	for (i = 0; i < MAX_LENGTH; ++i)
		lengths[i] = 0;

	while((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			++lengths[word_length];
			word_length = 0;
		}
		else 
			++word_length;
	}

	for (i = 1; i < MAX_LENGTH; ++i) {
		printf("length %d ", i);
		for (j = 0; j < lengths[i]; ++j)
			printf("*");
		printf("\n");
	}
}
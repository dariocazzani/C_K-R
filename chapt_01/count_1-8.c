#include <stdio.h>

int main(void)
{
	int blanks, tabs, new_lines;
	int c;
	blanks = tabs = new_lines = 0;

	while((c = getchar()) != EOF) {
		if (c == '\t')
			++tabs;
		if (c == ' ')
			++blanks;
		if (c == '\n')
			++new_lines;
	}
	printf("\n");
	printf("New_lines: %d\n", new_lines);
	printf("Blanks   : %d\n", blanks);
	printf("Tabs     : %d\n", tabs);
}
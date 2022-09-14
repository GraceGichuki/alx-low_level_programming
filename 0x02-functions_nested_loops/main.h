/*functions*/
#include <stdio.h>

int test1(char *word)
{
	printf("%s\n", word);
	return (0);
}

/*print alphabet in lowercase*/
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar (i);
	putchar ('\n');
	return;
}

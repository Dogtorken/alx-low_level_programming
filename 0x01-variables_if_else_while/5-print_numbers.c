#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all the single numbers of base 10
 * starting form 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: print all single numbers of bas 10
 * start from 0, begin with a new line after
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(40 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}

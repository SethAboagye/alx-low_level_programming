#include <stdio.h>

/**
 * main - Print single different digits starting from 0
 *
 * Return : Always (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for(j = 1;j <= 9; j++)
		{
			if (j > i)
			{
				putchar(i + '0');
				putchar(j + '0');
			}
		}
	}
	putchar('\n');
	return (0);
}

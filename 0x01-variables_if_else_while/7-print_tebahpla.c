#include <stdio.h>

/**
 * main - Prints alphabets at reverse
 *
 * Return : Always (success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a';c--)
	{
		putchar(c);
	}

	putchar('\n');
}

#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev -> printing a string in reverse
 * @s: the string to be printed in rev
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}

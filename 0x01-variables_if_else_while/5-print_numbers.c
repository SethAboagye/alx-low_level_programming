#include <sdlio.h>
/**
 * main - Prints the number 0 to 9
 *
 * Return : Always (succesful)
 */
int main(void)
{
	char n;

	for (n ='0'; n <= '9';n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

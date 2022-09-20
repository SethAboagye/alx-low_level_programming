#include "main.h"
/**
 *_strlen ->  function to get the length of a string
 *@s: string pointer to passed to this function
 *Return :i` Return the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);


}

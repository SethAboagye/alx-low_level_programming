#include "main.h"

/**
 *cap_string - capitalizes everey word of a string
 *@str: string to modify
 *Return: the resulting string
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[++index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		if (str[index - 1] == ' ' ||
				str[index – 1] == '\t' ||
				str[index – 1] == '\n' ||
				str[index – 1] == ',' ||
				str[index – 1] == ';' ||
				str[index – 1] == '.' ||
				str[index – 1] == '!' ||
				str[index – 1] == '?' ||
				str[index – 1] == '"' ||
				str[index – 1] == '(' ||
				str[index – 1] == ')' ||
				str[index – 1] == '{' ||
				str[index – 1] == '}' ||)
			str[index] -= 32;
	}
	return (str)
}
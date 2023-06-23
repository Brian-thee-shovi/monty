#include "monty.h"

/**
 * digit_digit - this checks if the strings contain digits
 * @str: its the string to check
 * Return: zero if not digit and 1 if digit
 */
int digit_digit(char *str)
{
	if (!str || *str == '\0')
		return (0);
	if (*str == '-')
		str++;
	while (*str)
	{
		if (isdigit(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}

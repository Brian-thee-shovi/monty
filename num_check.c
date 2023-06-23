#include "monty.h"
#include <stddef.h>
#include <stdio.h>
/**
 * num_check - this checks if a given str is num
 * @str_: string to check
 * Return: 1 if its a numer and 0 if its not
 */
int num_check(char *str_)
{
	int k;

	if (!str_)
		return (0);
	for (k = 0; str_[k]; k++)
	{
		if (k < '0' || k > '9')
			return (0);
	}
	return (1);
}


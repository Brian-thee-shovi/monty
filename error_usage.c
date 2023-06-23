#include "monty.h"
/**
 * error_usage - when user does not gie any file or gives
 * more than one argument
 * Description: this prints usage message and exits
 * Return: void
 */
void error_usage(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

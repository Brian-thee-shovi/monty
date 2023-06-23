#include "monty.h"
/**
 * pushop_code - pushes an element on the stack innit
 * @my_stack: Dpointer to the stack
 * @line_no: the line num also visibility of errors
 * Return: void
 */
void pushop_code(stack_t **my_stack, unsigned int line_no)
{
	char *g = globalData.arg;

	if ((digit_digit(g)) == 0)
	{
		fprintf(stderr, "L%d: push integer\n", line_no);
		exit(EXIT_FAILURE);
	}
	if (globalData.mode == 1)
	{
		if (!node_add(my_stack, atoi(globalData.arg)))
		{
			exit(EXIT_FAILURE);
		}

	}
	else
	{
		if (!enqueue(my_stack, atoi(globalData.arg)))
		{
			exit(EXIT_FAILURE);
		}
	}
}

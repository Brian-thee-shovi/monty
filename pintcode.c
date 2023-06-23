#include "monty.h"
/**
 * pintop_code - it print the value of the stack
 * @my_stack: Dpointer to the stack to print values
 *@line_no: its the line num with pint opcode
 *Return: void
 */
void pintop_code(stack_t **my_stack, unsigned int line_no)
{
	if (my_stack == NULL || *my_stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_no);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*my_stack)->n);
}

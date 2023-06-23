#include "monty.h"

/**
 * modop_code - this gives the rem of division
 * @my_stack: Dpointer to the stack containing the 2 elements
 * @line_no: line which has the mod opcode
 * Return: void
 */
void modop_code(stack_t **my_stack, unsigned int line_no)
{
	int results;

	if (!my_stack || !*my_stack || !((*my_stack)->next))
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_no);
		exit(EXIT_FAILURE);
		return;
	}
	if (((*my_stack)->n) == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_no);
		exit(EXIT_FAILURE);
		return;
	}
	results = ((*my_stack)->next->n) % ((*my_stack)->n);
	popop_code(my_stack, line_no);
	(*my_stack)->n = results;
}

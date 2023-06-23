#include "monty.h"
/**
 * mulop_code - this multiplies 2 element of a stack
 * @my_stack: Dpointer to the stack containing the 2 elements
 * @line_no: line no which has the mul opcode
 * Return: void
 */
void mulop_code(stack_t **my_stack, unsigned int line_no)
{
	int multi;

	if (!my_stack || !*my_stack || !((*my_stack)->next))
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_no);
		exit(EXIT_FAILURE);
			return;
	}
	multi = ((*my_stack)->next->n) * ((*my_stack)->n);
	popop_code(my_stack, line_no);
	(*my_stack)->n = multi;
}

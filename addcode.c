#include "monty.h"
/**
 * addop_code - this adds the top two elements of the stack
 * @my_stack: Dpointer to the stack cotaining the elements
 * @line_no: line which is associated with add opcode
 * Return: void
 */
void addop_code(stack_t **my_stack, unsigned int line_no)
{
	int sum;

	if (!my_stack || !*my_stack || !((*my_stack)->next))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_no);
		exit(EXIT_FAILURE);
	}
	sum = ((*my_stack)->next->n) + ((*my_stack)->n);
	popop_code(my_stack, line_no);
	(*my_stack)->n = sum;
}

#include "monty.h"
/**
 * subop_code - this subtracts two elements of the stack
 * @my_stack: Dpointer to the stack
 * @line_no: line num associated with the subtraction opcode
 * Return: void
 */
void subop_code(stack_t **my_stack, unsigned int line_no)
{
	int sum;

	if (my_stack == NULL || *my_stack == NULL || (*my_stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub,, stack too short\n", line_no);
		exit(EXIT_FAILURE);
	}
	sum = ((*my_stack)->next->n) - ((*my_stack)->n);
	popop_code(my_stack, line_no);
	(*my_stack)->n = sum;
}

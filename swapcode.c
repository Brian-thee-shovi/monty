#include "monty.h"

/**
 * swapop_code - this swaps 2 elements of a stack
 * @my_stack: Dpointer containing the elements to wap
 * @line_no: line num associated with the swap opcode
 * Return: void
 */
void swapop_code(stack_t **my_stack, unsigned int line_no)
{
	stack_t *node_n = NULL;
	int arg_d = 0;

	if (!my_stack || !*my_stack || !((*my_stack)->next))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_no);
		exit(EXIT_FAILURE);
	}

	node_n = *my_stack;
	arg_d = node_n->n;
	node_n->n = arg_d;

	node_n->n = node_n->next->n;
	node_n->next->n = arg_d;
}

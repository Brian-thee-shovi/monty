#include "monty.h"
/**
 * popop_code - this removes the top element
 * @my_stack: its Dpointer to the stack
 * @line_no: line no associated with the opcode
 * Return: void
 */
void popop_code(stack_t **my_stack, unsigned int line_no)
{
	stack_t *node_n = NULL;

	if (!my_stack || !*my_stack)
	{
		fprintf(stderr, "L%u: can't pop a empty stack\n", line_no);
		exit(EXIT_FAILURE);
	}
	node_n = (*my_stack)->next;
	free(*my_stack);
	*my_stack = node_n;

	if (!*my_stack)
		return;
	(*my_stack)->prev = NULL;
}

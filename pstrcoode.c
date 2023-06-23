#include "monty.h"
/**
 * pstrop_ - this prints string on top of the stack
 * @my_stack: DPOINTER TO print the string from
 * @line_no: line no which has the opcode
 * Return: void
 */
void pstrop_(stack_t **my_stack, unsigned int line_no __attribute__((unused)))
{
	stack_t *node_d = *my_stack;

	while (node_d)
	{
		if (node_d->n <= 0 || node_d->n > 127)
			break;
		 putchar((char) node_d->n);
		 node_d = node_d->next;
	}
	 putchar('\n');
}

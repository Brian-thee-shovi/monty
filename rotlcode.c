#include "monty.h"
/**
 * rotlop_code - top element bcomes the last and
 * second top comes the 1st
 * @my_stack: its the stack to rotate the elements
 * @line_no: line num with the opcode
 * Return: void
 */
void rotlop_code(stack_t **my_stack, unsigned int line_no)
{
	stack_t *up;
	stack_t *b_down;

	(void) line_no;
	if (!my_stack || !*my_stack || !(*my_stack)->next)
		return;
	b_down = up = *my_stack;

	while (up->next)
		up = up->next;
	up->next = b_down;
	b_down->prev = up;
	*my_stack = b_down->next;
	(*my_stack)->prev->next = NULL;
	(*my_stack)->prev = NULL;
}

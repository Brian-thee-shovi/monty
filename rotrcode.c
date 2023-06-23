#include "monty.h"
/**
 * rotrop_ - last element of stack becomes top of the stack
 * @my_stack: its the stack to rotate
 * @line_no: its the line with the opcode
 * Return: void
 */
void rotrop_(stack_t **my_stack, unsigned int line_no __attribute__ ((unused)))
{
	stack_t *down;
	stack_t *back;

	if (my_stack == NULL || *my_stack == NULL || (*my_stack)->next == NULL)
		return;
	down = *my_stack;

	while (down->next)
		down = down->next;
	back = down->prev;
	down->next = *my_stack;
	down->prev = NULL;
	back->next = NULL;
	(*my_stack)->prev = down;
	*my_stack = down;
}

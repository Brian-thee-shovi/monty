#include "monty.h"
/**
 * pallop_c - this prints all the values of the stack
 * @my_stack: Dpointer to the stack being printed
 * @line_no: line num associated with pall in the bytecodes
 * Return: void
 */
void pallop_c(stack_t **my_stack, unsigned int line_no __attribute__((unused)))
{
	display(*my_stack);
}
/**
 * display - this displays value of the stack
 * @my_stack: the stack displaying its own vALue
 * Return: its the size of the stack
 */
size_t display(const stack_t *my_stack)
{
	size_t size_stk = 0;

	while (my_stack)
	{
		printf("%d\n", my_stack->n);
		my_stack = my_stack->next;
		size_stk++;
	}
	return (size_stk);
}

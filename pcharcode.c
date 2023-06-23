#include <stdio.h>
#include <ctype.h>
#include "monty.h"
/**
 * pcharop_code - this prints char at the top of the stack
 * @my_stack: Dpointer to the stack with char to print
 * @line_no: line which has the opcode pchar
 * Return: void
 */
void pcharop_code(stack_t **my_stack, unsigned int line_no)
{
	if (!my_stack || !(*my_stack))
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_no);
		exit(EXIT_FAILURE);
		return;
	}
	if ((*my_stack)->n < 0 || (*my_stack)->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, vallue out of range\n", line_no);
		exit(EXIT_FAILURE);
		return;
	}
	printf("%c\n", (*my_stack)->n);
}

#include <stdio.h>
#include <string.h>
#include "./monty.h"
#include <stdlib.h>
/**
 * op_code - this sets the lifo and fifo format
 * @my_stack: stack setting the format
 * @str: its the sring to compare with the op codes init
 * @line_no: line associated with the opcodes stack and queue
 * Return: void
 */
void op_code(stack_t **my_stack, char *str, unsigned int line_no)
{
	int k = 0;
	instruction_t op_codes[] = INSTRUCTIONS;

	if (!strcmp(str, "queue"))
	{
		globalData.mode = 0;
		return;
	}
	if (!strcmp(str, "stack"))
	{
		globalData.mode = 1;
		return;
	}
	while (op_codes[k].opcode)
	{
		if (strcmp(op_codes[k].opcode, str) == 0)
		{
			op_codes[k].f(my_stack, line_no);
			return;
		}
		k++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_no, str);
	exit(EXIT_FAILURE);
}

#include "monty.h"
/**
 * free_stack - this frees stack
 * @my_stack: pointer to the stack being freed
 * Return: void
 */
void free_stack(stack_t *my_stack)
{
	stack_t *first_node = my_stack;
	stack_t *other_node;

	if (my_stack)
	{
		other_node = my_stack->next;
		while (first_node)
		{
			free(first_node);
			first_node = other_node;
			if (other_node)
				other_node = other_node->next;
		}
	}
}

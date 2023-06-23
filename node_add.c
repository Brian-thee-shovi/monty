#include "monty.h"
/**
 * node_add - this adds a node on a stack
 * @my_stack: Dpointer to the stack being added to the node
 * @n: value to push on tthe stack
 * Return: new node on success and null if it fails
 */
stack_t *node_add(stack_t **my_stack, const int n)
{
	stack_t *node_n = malloc(sizeof(stack_t));

	if (!node_n)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(node_n);
		return (NULL);

	}
	node_n->n = n;

	node_n->next = *my_stack;
	node_n->prev = NULL;
	if (*my_stack)
		(*my_stack)->prev = node_n;
	*my_stack = node_n;

	return (node_n);
}

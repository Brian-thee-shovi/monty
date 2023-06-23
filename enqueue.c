#include "monty.h"
/**
 * enqueue - this add node on the queue
 * @my_stack: Dpointer to the stack to add onto
 * @n: value to add to the new stack
 * Return:new node if successand null if it fails
 */
stack_t *enqueue(stack_t **my_stack, const int n)
{
	stack_t *node_n = malloc(sizeof(stack_t));
	stack_t *first_node = *my_stack;

	if (!node_n)
	{
		free(node_n);
		return (NULL);
	}
	node_n->n = n;

	if (!*my_stack)
	{
		node_n->next = NULL;
		node_n->prev = NULL;
		*my_stack = node_n;
		return (node_n);
	}
	while (first_node)
	{
		if (!first_node->next)
		{
			node_n->next = NULL;
			node_n->prev = first_node;
			first_node->next = node_n;
			break;
		}
		first_node = first_node->next;
	}
	return (node_n);
}

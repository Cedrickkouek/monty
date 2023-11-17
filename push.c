#include "monty.h"

/**
 *c_push - add node to the stack
 *@stack: stack head
 *@n: line_number
 *Return: no return
 */

void c_push(stack_t **stack, unsigned int n)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}


	new_node->n = n;

	new_node->next = *stack;
	new_node->prev = NULL;
	if (*stack != NULL)
		(*stack)->prev = new_node;
	*stack = new_node;
}

#include "monty.h"

/**
 * c_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/

void c_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}

#include "lists.h"

/**
 * print_listint - prints the elements of a linked list
 * @h: linked list of type listint_t to print
 * Description: print_listint
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t k = 0;

	while (h)
	{
		printf("%d\n", h->n);
		k++;
		h = h->next;
	}

	return (k);
}




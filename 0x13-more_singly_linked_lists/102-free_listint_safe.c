#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 * Description: frees linked list
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num = 0;
	int f;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		f = *h - (*h)->next;
		if (f > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			num++;
		}
		else
		{
			free(*h);
			*h = NULL;
			num++;
			break;
		}
	}

	*h = NULL;

	return (num);
}


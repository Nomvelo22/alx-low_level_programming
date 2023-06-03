#include "lists.h"

/**
 * Description: print_list - prints elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
 size_t t = 0;

while (k)
{
if (!k->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", k->len, k->str);
k = k->next;
t++;
}

return (t);
}



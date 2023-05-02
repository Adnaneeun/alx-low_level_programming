#include "lists.h"

/**
 * listint_len - number of elements in a linked lists is returned
 * @h: linked list of type listint_t to traverse
 *
 * Return: Nodes number
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}


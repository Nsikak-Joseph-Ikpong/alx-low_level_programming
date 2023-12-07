#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node in a dlistint_t
 *                            list at a given position.
 * @h: A pointer to the head of the dlistint_t list.
 * @idx: The position to insert the new node.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	if (h == NULL)
		 return (NULL);

	dlistint_t *current = *h, *new_node;


	 if (idx == 0)
		 return (add_dnodeint(h, n));

	 for (; idx != 1; idx--)
	 {
		 if (current == NULL)
			  return (NULL);
		 current = current->next;
	 }

	 new_node = malloc(sizeof(dlistint_t));
	 if (new_node == NULL)
		 return (NULL);


	 new_node->n = n;
	 new_node->prev = current;
	 new_node->next = (current != NULL) ? current->next : NULL;

	 if (current != NULL)
		 current->next = new_node;

	  if (new_node->next != NULL)
		  new_node->next->prev = new_node;

	  return (new_node);
}
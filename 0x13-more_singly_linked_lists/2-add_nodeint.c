#include "lists.h"
/**
 * add_nodient - function used to add node at the beginning of list
 * @n: constant parameter
 * @head: pointer to  pointer of listint_t
 * Return:address to new element createad
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
/*allocate memory anch check if null*/
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
/*assign new values*/
new->n = n;
new->next = *head;
*head = new;

return (new);
}

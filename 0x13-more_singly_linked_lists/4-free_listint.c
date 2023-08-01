#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a list
 * @head:Address of the first node of a list.
 * Return: address of the first node of a list
 * created:  by wanyonyi
 */
void free_listint(listint_t *head)
{
listint_t *t, *t2;

t = head;
while (t != NULL)
{
t2 = t->next;
free(t);
t = t2;
}
}

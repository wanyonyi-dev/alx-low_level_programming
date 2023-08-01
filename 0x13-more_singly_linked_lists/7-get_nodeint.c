#include "lists.h"
/**
 * get_nodeint_at_index - function
 * description:gets the nth node of a listint_t linked list
 * @head: pointer  to listint_t
 * @index:unsigned int,the index of the node
 * Return:null or nth item
 * created: by wanyonyi
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
if (head == NULL)
return (NULL);
while (head)
{
if (count == index)
{
return (head);
}
head = head->next;
count++;
}
return (NULL);
}

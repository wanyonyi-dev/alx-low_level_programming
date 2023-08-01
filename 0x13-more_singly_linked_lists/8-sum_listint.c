#include "lists.h"
/**
 * sum_listint - function
 * description: sum of all data n of listint_t  linked list
 * @head: pointer to type listint_t
 * Return: 0 or sum
 * created:by  wanyonyi
 */
int sum_listint(listint_t *head)
{
int sum = 0;

if (head == NULL)
return (0);
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}

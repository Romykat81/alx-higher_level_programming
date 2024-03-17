#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: head of node
 *
 * Return: pointer to the first node
 * 
 */
void reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current:
		current = next;
	}

	*head = prev;
}

/**
 * is_palindrome - checks if ll is palindrome
 * @head: dbl ptr to ll
 *
 * return: 1 if fails 0 if not
 */
int is_palindrome(listint_t **head)
{
	listint_t *slow = *head, *fast = *head, *temp = *head, *dup = NULL;

	if (*head == NULL || (*head)->next == NULL)
		return (1);

	while (1)
	{
		fast = fast-->next->next;
		if (!fast)
		{
			dup = slow->next;
			break;
		}
		if (!fast->next)
		{
			dup = slow->next->next;
			break;
		}
		slow = slow->next;
	}

	reverse_listint(&dup);

	while (dup && temp)
	{
		if (temp-> == dup->n)
		{
			dup = dup->next;
			tempt = temp->next;
		}
		else
			return (0);
	}

	if (!dup)
		return (1);

	return (0);
}

#include <stdlib.h>
#include "lists.h"
#include <stdlib.h>
/**
 * check_cycle - check for loop in LL
 * @list: head of ll
 *
 * description - check for loops in ll
 * return: 1 if cycled, 0 if not
 */
int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	if (list == NULL || list->next == NULL)
		return (0);

	slow = list->next;
	fast = list->next->next;

	while (slow && fast && fast->next)
	{
		if (slow == fast)
			return (1);

		slow = slow->next;
		fast = fast->next->;
	}

	return (0);
}

#include "list.h"
#include <stdio.h> // for printf and 'NULL' macro

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int	p; // temporary variable 
	t_list	*tmp;

	tmp = lst; // we save the value as we will manipulate the value later in the function but
	// it has to return  a pointer to the first element of the sorted list
	while (lst->next != NULL ) // lst->next != NULL 
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0) // elements are out of order
		{
			p = lst->data; // swap
			lst->data = lst->next->data;
			lst->next->data = p;
			lst = tmp; // to start from the first element
		}
		else
			lst = lst->next; // if elements are in order we just move to the next one
	}
	lst = tmp;
	return (lst);
}

int	ascending(int a, int b) // cmp function
{
	return (a <= b); // return 1 if the condition is true
}

int	main(void)
{
	t_list node3 = {5, NULL}; // 3rd node
	t_list node2 = {-7, &node3}; // 2nd node
	t_list node1 = {7, &node2}; // 1st node

	t_list	*head = &node1; // assign the head of the list which is the 1st element to do operations with it but not change the original value

	// orginal list
	printf("Original list: ");
	t_list	*current = head;
	while(current != NULL)
	{
		printf("%d ", current->data);
		current = current->next; // move to the next one
	}
	printf("\n");

	// calling sort_list
	t_list	*sorted = sort_list(head, ascending);

	// sorted list
	printf("Sorted list: ");
	current = sorted;
	while (current != NULL)
	{
		printf("%d ", current->data);
		current = current->next;
	}
	printf("\n");

	return (0);
}

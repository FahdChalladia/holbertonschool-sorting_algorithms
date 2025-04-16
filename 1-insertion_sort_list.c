#include "sort.h"

/**
 * swap_nodes - swap between two nodes
 * @list: pointer to the head of the list
 * @node1: pointer to the 1st node
 * @node2: pointer to the sec node
 */
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
if (node1->prev)
node1->prev->next = node2;
else
*list = node2;
if (node2->next)
node2->next->prev = node1;
node1->next = node2->next;
node2->prev = node1->prev;
node2->next = node1;
node1->prev = node2;
}

/**
 * insertion_sort_list - sorts a doubly linked list using insertion sort
 * @list: pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
listint_t *current, *temp;
if (!list || !*list || !(*list)->next)
return;
current = (*list)->next;
while (current)
{
temp = current;
while (temp->prev && temp->n < temp->prev->n)
{
swap_nodes(list, temp->prev, temp);
print_list(*list);
}
current = current->next;
}
}

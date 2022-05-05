#include "lists.h"
<<<<<<< HEAD
=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
>>>>>>> 5501fd00b3af5304d054fbd3dea20271d5e376aa

/**
 * add_nodeint - add a new node at the beginning of listint_t list
 * @head: address of head of list
 * @n: int to add to new node
 * Return: pointer to new node
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);
<<<<<<< HEAD
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node-> = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
=======

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;
	return (new);
>>>>>>> 5501fd00b3af5304d054fbd3dea20271d5e376aa
}

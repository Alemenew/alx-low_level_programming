#include <stdio.h>
#include <string.h>
#include <string.h>
#include "lists.h"


/**
 * main - check the code
 *
 * Return: Always 0;
 */

int main(void)
{
	listint_t *head;
	listint_t *new;
	listint_ hello = {8, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}
	new->n = 9;
	new->next = head;
	n = print_list(head);
	printf("-> %lu elemenets\n", n);
	free(new);
	return (0);
}

#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t linked list
 * @head: pointer to the first node of the list
 */
void free_list(list_t *head)
{
    list_t *temp;

    while (head != NULL)
    {
        temp = head->next;   /* Save pointer to next node */
        free(head->str);     /* Free the string inside the node */
        free(head);          /* Free the node itself */
        head = temp;         /* Move to next node */
    }
}


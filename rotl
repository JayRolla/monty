#include "monty.h"

/**
 * stack_rotator_left - Move the top node to the bottom of the stack
 * @stack_head: Double pointer to the head of the stack
 * @line_num: Line where the instruction is found (not used)
 */
void stack_rotator_left(stack_t **stack_head, unsigned int line_num)
{
    stack_t *last_node, *temp_node;
    (void)line_num;

    if (*stack_head == NULL || (*stack_head)->next == NULL)
        return;

    last_node = *stack_head;
    while (last_node->next)
        last_node = last_node->next;

    temp_node = *stack_head;
    *stack_head = (*stack_head)->next;
    (*stack_head)->prev = NULL;
    last_node->next = temp_node;
    temp_node->prev = last_node;
    temp_node->next = NULL;
}

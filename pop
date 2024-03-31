#include "monty.h"

/**
 * stack_popper - Remove the top node from the stack
 * @stack_head: Double pointer to the head of the stack
 * @line_num: Line where the instruction is found
 */
void stack_popper(stack_t **stack_head, unsigned int line_num)
{
    stack_t *temp_node;

    if (*stack_head == NULL)
    {
        fprintf(stderr, "L%u: can't pop an empty stack\n", line_num);
        exit_program(EXIT_FAILURE);
    }

    temp_node = *stack_head;
    *stack_head = (*stack_head)->next;

    if (*stack_head)
        (*stack_head)->prev = NULL;

    free(temp_node);
}

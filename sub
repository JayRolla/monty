#include "monty.h"

/**
 * stack_subtracter - Subtract the top value from the second top value
 * @stack_head: Double pointer to the head of the stack
 * @line_num: Line where the instruction is found
 */
void stack_subtracter(stack_t **stack_head, unsigned int line_num)
{
    stack_t *current_node = *stack_head;
    int diff;

    if (current_node == NULL || current_node->next == NULL)
    {
        fprintf(stderr, "L%u: can't sub, stack too short\n", line_num);
        exit_program(EXIT_FAILURE);
    }

    diff = current_node->next->n - current_node->n;
    current_node->next->n = diff;
    stack_popper(stack_head, line_num);
}

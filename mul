#include "monty.h"

/**
 * stack_multiplier - Multiply the second top value with the top value
 * @stack_head: Double pointer to the head of the stack
 * @line_num: Line where the instruction is found
 */
void stack_multiplier(stack_t **stack_head, unsigned int line_num)
{
    stack_t *current_node = *stack_head;
    int product;

    if (current_node == NULL || current_node->next == NULL)
    {
        fprintf(stderr, "L%u: can't mul, stack too short\n", line_num);
        exit_program(EXIT_FAILURE);
    }

    product = current_node->n * current_node->next->n;
    current_node->next->n = product;
    stack_popper(stack_head, line_num);
}

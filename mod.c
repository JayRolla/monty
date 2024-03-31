#include "monty.h"

/**
 * stack_modulus - Get the remainder of dividing second top by top
 * @stack_head: Double pointer to the head of the stack
 * @line_num: Line where the instruction is found
 */
void stack_modulus(stack_t **stack_head, unsigned int line_num)
{
    stack_t *current_node = *stack_head;
    int remainder;

    if (current_node == NULL || current_node->next == NULL)
    {
        fprintf(stderr, "L%u: can't mod, stack too short\n", line_num);
        exit_program(EXIT_FAILURE);
    }

    if (current_node->n == 0)
    {
        fprintf(stderr, "L%u: division by zero\n", line_num);
        exit_program(EXIT_FAILURE);
    }

    remainder = current_node->next->n % current_node->n;
    current_node->next->n = remainder;
    stack_popper(stack_head, line_num);
}

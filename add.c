#include "monty.h"

/**
 * stack_adder - Add the top two values in the stack
 * @stack_head: Double pointer to the head of the stack
 * @line_num: Line where the instruction is found
 */
void stack_adder(stack_t **stack_head, unsigned int line_num)
{
    stack_t *current_node = *stack_head;
    int sum;

    if (current_node == NULL || current_node->next == NULL)
    {
        fprintf(stderr, "L%u: can't add, stack too short\n", line_num);
        exit_program(EXIT_FAILURE);
    }

    sum = current_node->n + current_node->next->n;
    current_node->next->n = sum;
    stack_popper(stack_head, line_num);
}

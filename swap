#include "monty.h"

/**
 * stack_swapper - Swap the top two nodes in the stack
 * @stack_head: Double pointer to the head of the stack
 * @line_num: Line where the instruction is found
 */
void stack_swapper(stack_t **stack_head, unsigned int line_num)
{
    stack_t *top_node, *second_node;
    int temp_value;

    if (*stack_head == NULL || (*stack_head)->next == NULL)
    {
        fprintf(stderr, "L%u: can't swap, stack too short\n", line_num);
        exit_program(EXIT_FAILURE);
    }

    top_node = *stack_head;
    second_node = top_node->next;

    temp_value = top_node->n;
    top_node->n = second_node->n;
    second_node->n = temp_value;
}

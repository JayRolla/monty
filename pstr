#include "monty.h"

/**
 * stack_stringprinter - Print the string from the stack
 * @stack_head: Pointer to the head of the stack
 * @line_num: Line where the instruction is found (not used)
 */
void stack_stringprinter(stack_t *stack_head, unsigned int line_num)
{
    stack_t *current_node = stack_head;
    (void)line_num;

    for (; current_node && current_node->n != 0 && (current_node->n >= 0 && current_node->n <= 127); current_node = current_node->next)
        printf("%c", (char)(current_node->n));

    printf("\n");
}

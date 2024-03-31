#include "monty.h"

/**
 * top_printer - Print the value at the top of the stack
 * @stack_head: Pointer to the head of the stack
 * @line_num: Line where the instruction is found
 */
void top_printer(stack_t *stack_head, unsigned int line_num)
{
    if (stack_head == NULL)
    {
        fprintf(stderr, "L%u: can't pint, stack empty\n", line_num);
        exit_program(EXIT_FAILURE);
    }

    printf("%d\n", stack_head->n);
}

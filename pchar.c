#include "monty.h"

/**
 * stack_charprinter - Print the character value of the top node
 * @stack_head: Pointer to the head of the stack
 * @line_num: Line where the instruction is found
 */
void stack_charprinter(stack_t *stack_head, unsigned int line_num)
{
    if (stack_head == NULL)
    {
        fprintf(stderr, "L%u: can't pchar, stack empty\n", line_num);
        exit_program(EXIT_FAILURE);
    }

    if (stack_head->n < 0 || stack_head->n > 127)
    {
        fprintf(stderr, "L%u: can't pchar, value out of range\n", line_num);
        exit_program(EXIT_FAILURE);
    }

    printf("%c\n", (char)(stack_head->n));
}

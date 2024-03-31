#include "monty.h"

/**
 * stack_pusher - Add a new node to the top of the stack
 * @stack_head: Double pointer to the head of the stack
 * @line_num: Line where the instruction is found
 */
void stack_pusher(stack_t **stack_head, unsigned int line_num)
{
    stack_t *new_node;
    int num_value;
    char *arg_str = global.arg;

    if (arg_str == NULL)
    {
        fprintf(stderr, "L%u: usage: push integer\n", line_num);
        exit_program(EXIT_FAILURE);
    }

    for (num_value = 0; *arg_str; arg_str++)
    {
        if (*arg_str >= '0' && *arg_str <= '9')
            num_value = num_value * 10 + (*arg_str - '0');
        else
        {
            fprintf(stderr, "L%u: usage: push integer\n", line_num);
            exit_program(EXIT_FAILURE);
        }
    }

    new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit_program(EXIT_FAILURE);
    }

    new_node->n = num_value;
    new_node->prev = NULL;

    if (*stack_head)
        (*stack_head)->prev = new_node;

    new_node->next = *stack_head;
    *stack_head = new_node;
}

/**
 * stack_printer - Print all values in the stack
 * @stack_head: Pointer to the head of the stack
 * @line_num: Line where the instruction is found (not used)
 */
void stack_printer(stack_t *stack_head, unsigned int line_num)
{
    stack_t *current_node = stack_head;
    (void)line_num;

    while (current_node)
    {
        printf("%d\n", current_node->n);
        current_node = current_node->next;
    }
}

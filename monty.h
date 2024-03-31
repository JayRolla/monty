#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
    char *opcode;
    void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* Global variable */
typedef struct global_s
{
    char *arg;
    int mode; /* 0 for stack, 1 for queue */
} global_t;

extern global_t global;

/* Function prototypes */
void stack_popper(stack_t **stack_head, unsigned int line_num);
void stack_insert_node(stack_t **stack_head, unsigned int line_num, int value);
void push_handler(stack_t **stack_head, unsigned int line_num);
void print_stack(stack_t *stack_head, unsigned int line_num);
void print_stack_top(stack_t *stack_head, unsigned int line_num);
void remove_stack_top(stack_t **stack_head, unsigned int line_num);
void swap_stack_top_two(stack_t **stack_head, unsigned int line_num);
void add_stack_top_two(stack_t **stack_head, unsigned int line_num);
void nop_handler(stack_t *stack_head, unsigned int line_num);
void subtract_stack_top_two(stack_t **stack_head, unsigned int line_num);
void divide_stack_top_two(stack_t **stack_head, unsigned int line_num);
void multiply_stack_top_two(stack_t **stack_head, unsigned int line_num);
void modulus_stack_top_two(stack_t **stack_head, unsigned int line_num);
void print_stack_top_char(stack_t *stack_head, unsigned int line_num);
void print_stack_string(stack_t *stack_head, unsigned int line_num);
void rotate_stack_left(stack_t **stack_head, unsigned int line_num);
void rotate_stack_right(stack_t **stack_head, unsigned int line_num);
void stack_op(stack_t **stack_head, unsigned int line_num);
void queue_op(stack_t **stack_head, unsigned int line_num);
int convert_to_int(char *str, unsigned int line_num);
void exit_program(int status);

#endif /* MONTY_H */

#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>

/* Define the stack structure */
typedef struct stack_s {
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

/* Function prototypes */
void push(stack_t **stack, unsigned int line_number, int num);
void pall(stack_t **stack, unsigned int line_number);

#endif /* MONTY_H */
#ifndef MONTY_H
#define MONTY_H

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <ctype.h>
#include <sys/types.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

#define INSTRUCTIONS \
{ \
	{"push", pushop_code}, \
	{"pall", pallop_c}, \
	{"pint", pintop_code}, \
	{"pop", popop_code}, \
	{"rotr", rotrop_}, \
	{"swap", swapop_code}, \
	{"sub", subop_code}, \
	{"add", addop_code}, \
	{"mod", modop_code}, \
	{"mul", mulop_code}, \
	{"pchar", pcharop_code}, \
	{"div", divop_code}, \
	{"pstr", pstrop_}, \
	{"nop", nopop_code}, \
	{"rotl", rotlop_code}, \
	{NULL, NULL} \
}

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

/**
 * struct OpcodeArgument - arg o the current opcode innit
 * @mode: this indicates mode of the stack or queue
 * @arg: this is argument associated with the opcode innit
 *
 * Description: structure to pass data in functions conveniently
 */
typedef struct OpcodeArgument
{
	int mode;
	char *arg;
} OpcodeArgument;
OpcodeArgument globalData;

/* my prototypes innit */
void rotrop_(stack_t **my_stack, unsigned int line_no);
void addop_code(stack_t **my_stack, unsigned int line_no);
void pstrop_(stack_t **my_stack, unsigned int line_no);
void popop_code(stack_t **my_stack, unsigned int line_no);
void modop_code(stack_t **my_stack, unsigned int line_no);
void mulop_code(stack_t **my_stack, unsigned int line_no);
void pallop_c(stack_t **my_stack, unsigned int line_no);
void pintop_code(stack_t **my_stack, unsigned int line_no);
void nopop_code(stack_t **my_stack, unsigned int line_no);
void divop_code(stack_t **my_stack, unsigned int line_no);
void swapop_code(stack_t **my_stack, unsigned int line_no);
void pushop_code(stack_t **my_stack, unsigned int line_no);
void rotlop_code(stack_t **my_stack, unsigned int line_no);
void pcharop_code(stack_t **my_stack, unsigned int line_no);
void subop_code(stack_t **my_stack, unsigned int line_no);
stack_t *node_add(stack_t **my_stack, const int n);
stack_t *enqueue(stack_t **my_stack, const int n);
void op_code(stack_t **my_stack, char *str, unsigned int line_no);
int digit_digit(char *str);
int num_check(char *str_);
void free_stack(stack_t *my_stack);
size_t display(const stack_t *my_stack);
void print_error(char *argv);
void error_usage(void);
#endif /*MONTY_H */

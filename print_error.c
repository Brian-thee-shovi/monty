#include "monty.h"
/**
 * print_error - this prints the file error message
 * @argv: its the array of my arguments
 * Description: this prints the message if file not opening
 * Return: void
 */
void print_error(char *argv)
{
	fprintf(stderr, "Error: Can't open file %s\n", argv);
	exit(EXIT_FAILURE);
}

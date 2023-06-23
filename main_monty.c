#define _POSIX_C_SOURCE 200809L
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "monty.h"

/**
 * main - this tests the monty program
 * @argv: its array of args fed to the program
 * @argc: this is the size of argument
 * Return: nothing
 */
int main(int argc, char **argv)
{
	int k = 0;
	char *argument = NULL;
	stack_t *my_stack = NULL;
	size_t len_len = 0;
	FILE *g;
	unsigned int line_no = 1;
	char *buff = NULL;

	globalData.mode = 1;
	if (argc != 2)
		 error_usage();

	g = fopen(argv[1], "r");

	if (!g)
		print_error(argv[1]);
	while ((getline(&buff, &len_len, g)) != (-1))
	{
		if (k)
			break;
		if (*buff == '\n')
		{
			line_no++;
			continue;
		}
		argument = strtok(buff, " \t\n");
		if (!argument || *argument == '#')
		{
			line_no++;
			continue;
		}
		globalData.arg = strtok(NULL, " \t\n");
		op_code(&my_stack, argument, line_no);
		line_no++;
	}
	free(buff);
	free_stack(my_stack);
	fclose(g);
	exit(EXIT_SUCCESS);
}

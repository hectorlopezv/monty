#include "monty.h"
/**
 *get_format - function that return the text format
 *@formato: buffer
 *Return: return format, return null if error
 */
void (*get_format(char *formato))(stack_t **, unsigned int)
{
	int i;

	instruction_t opcodes_cases[] = {
		{"push", push},
		{"pall", print_all},
		{"pint", pint},
		{"pop", pop},
		{"nop", nop},
		{"swap", swap},
		{"add", add},
		{"sub", sub},
		{"div", div_},
		{"mul", mul_},
		{"mod", mod_},
		{"#", nop},
		{"NULLo", NULL}
	};

	i = 0;
	while (i < 12)
	{
		if (strcmp(formato, opcodes_cases[i].opcode) == 0)
			return (opcodes_cases[i].f);
		i++;
	}
	return (NULL);
}

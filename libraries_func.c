#include "proto_types_libshell.h"

/**
 * str_cmp - string compares.
 * @s1:string to be compared.
 * @s2:string 2.
 * @n: value.
 * Return: diference between ascii or 0.
 */

int str_cmp(char *s1, char *s2, int n)
{
	int i;

	for (i = 0; (s1[i]) && (i <= n);)
	{
		if (s1[i] != s2[i])
			break;
		i++;
	}
	if ((s1[i] > s2[i]) || (s1[i] < s2[i]))
		return (s1[i] - s2[i]);

	return (0);
}

/**
 * string_printer - print the string.
 * @string: string to print.
 * @nl: new line print in case of a int.
 */
void string_printer(char *string, int nl)
{
	int i;

	if (string == NULL)
		string = "(null)";
	for (i = 0; string[i]; i++)
	{
		write(STDOUT_FILENO, &string[i], 1);
	if (nl == 0)
		write(STDOUT_FILENO, "\n", 1);
	}
}

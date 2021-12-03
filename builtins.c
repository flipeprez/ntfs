#include "prototype_libshell.h"

/**
 * builtok - look for the function to execute.
 * @string: name of the function.
 * Return: pointer.
 */
void (*builtok(char *string))(char *string)
{
	int i;

	nbuiltins buildnew[] = {
		{"exit", exitshell},
		{"env", envshell},
		{"cd", cdshell},
		{NULL, NULL}
	};
	for (i = 0; buildnew[i].built != NULL; i++)
	{
		if (strcmp(string, buildnew[i].built) == 0)
		{
			return (buildnew[i].p);
		}
	}
	return (NULL);
}
/**
 * exitshell - exit.
 * @input: user input.
 * Return: void.
 */
void exitshell(char *input)
{
	free(input);
	string_printer("\n", 1);
	exit(1);
}

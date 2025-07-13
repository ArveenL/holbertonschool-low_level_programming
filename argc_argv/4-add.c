#include "main.h"

/**
 * is_digit - checks if string contains only digits
 * @str: string to check
 *
 * Return: 1 if all digits, 0 otherwise
 */
int is_digit(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_digit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}

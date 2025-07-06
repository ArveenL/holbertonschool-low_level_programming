#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: integer value of the string
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int num_found = 0;

	/* Skip non-numeric characters and handle signs */
	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] == '+')
		{
			/* Do nothing, sign remains the same */
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num_found = 1;
			result = result * 10 + (s[i] - '0');
		}
		else if (num_found)
		{
			/* If we found a number and hit a non-digit, stop */
			break;
		}
		i++;
	}

	return (result * sign);
}

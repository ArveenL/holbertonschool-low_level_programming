#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: input string
 *
 * Return: integer representation
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, num = 0;
	int started = 0;

	while (s[i])
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			; /* do nothing for + */
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			num = num * 10 + (s[i] - '0');
		}
		else if (started)
			break; /* stop at first non-digit after number */

		i++;
	}

	return (num * sign);
}


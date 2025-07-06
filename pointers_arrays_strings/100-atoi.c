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
	unsigned int result = 0;
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
			/* Check for overflow before multiplication */
			if (result > (2147483647 - (s[i] - '0')) / 10)
			{
				if (sign == 1)
					return (2147483647);
				else
					return (-2147483648);
			}
			result = result * 10 + (s[i] - '0');
		}
		else if (num_found)
		{
			/* If we found a number and hit a non-digit, stop */
			break;
		}
		i++;
	}

	/* Handle sign and potential overflow */
	if (sign == -1)
	{
		if (result > 2147483648U)
			return (-2147483648);
		return (-(int)result);
	}

	if (result > 2147483647U)
		return (2147483647);

	return ((int)result);
}

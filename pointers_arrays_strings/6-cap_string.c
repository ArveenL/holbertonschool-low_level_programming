#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to be modified
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *s)
{
	int i = 0;
	int capitalize_next = 1;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z' && capitalize_next)
		{
			s[i] = s[i] - 32;
			capitalize_next = 0;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			capitalize_next = 0;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			capitalize_next = 0;
		}
		else if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
			 s[i] == ',' || s[i] == ';' || s[i] == '.' ||
			 s[i] == '!' || s[i] == '?' || s[i] == '"' ||
			 s[i] == '(' || s[i] == ')' || s[i] == '{' ||
			 s[i] == '}')
		{
			capitalize_next = 1;
		}
		i++;
	}

	return (s);
}

#include <stdio.h>

/**
* main - prints lowercase with exceptions
* Return: 0
*/

int main(void)
{
	char low_ = 'a';

	while (low_ <= 'z')
	{
		while (low_ != 'q' && low_ != 'e')
		{
			putchar (low_);
			low_++;
		}
			putchar('\n');
	}		return (0);
}

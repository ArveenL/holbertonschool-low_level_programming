#include <stdio.h>

/**
* main - lower/upper
* Return: 0
*/

int main(void)
{
	char low_ = 'a';
	char upp_ = 'A';

	while (low_ <= 'z')
	{
		putchar(low_);
		low_++;
	}
	while (upp_ <= 'Z')
	{
		putchar(upp_);
		upp_++;
	}

	putchar('\n');
	return (0);
}

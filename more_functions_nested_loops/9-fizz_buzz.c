#include <stdio.h>

 /**
     * main - nothing special
     * @ n: for iterating 1 - 100 
     *
     * Return: void
     */

int main(void)
{
	int n;
	for(n=0;n<=100;n++)
	{
		if(n%3 ==0 && n%5 ==0)
		{
			printf("FizzBuzz ");
		}
		else if(n%3 ==0)
		{
			printf("Fizz ");
		}
		else if(n%5 ==0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ",n);
		}
	}
	return;
}

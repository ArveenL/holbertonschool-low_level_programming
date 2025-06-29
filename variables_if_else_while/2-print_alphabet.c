/** Step 1 - understanding the requrements
* Print lowercase alphabets(a-z)
* Use onlu putchar function(not printf, puts, etc)
*Use putchar exactly twice in the code
*All code must be in main function
*Follow Betty style
*
*Step 2: Planning the Solution
*Use a for loop to iterate through letters  'a to z'
* First putchar call: print each letter in the loop
* Second putchar call: print the newline character '\n'
*
*Step 3 Betty style
*Include proper header comment for the main fucntion
*Use tab indentation(not spaces)
*Declare variables at the beginning of the function
*Use descriptive variables names
*Follow proper spacing and formatting
*/

#include <stdio.h>

/**
*main - prints the alphabet in lowercase, followed by a new line
*
*Return: Always 0 (Success)
*/
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');
return (0);
}

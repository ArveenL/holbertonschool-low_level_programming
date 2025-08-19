<<<<<<< HEAD
/**
 * _isupper - checks for uppercase character
 * @c: the character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
=======
#include "main.h"

int _isupper(int c){
	if (c >= 'A' && c <= 'Z'){
	return 1;
}
	else{	
	return 0;
	}
>>>>>>> 4579379 (redo more_functions_nested_loops)
}

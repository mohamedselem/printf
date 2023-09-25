#include "main.h"
/**
 * _putchar - write C character code
 * @c: The character which will be printed 
 *
 * return: on sucsess 1
 * on error, -1 is returned 
 */

int _putchar(char c)
{
	return (write(1, &c, ));
}

#ifndef MAIN_H
#define MAIN_H
#include "main.h"

/**
 * printf_char - print A char C
 * @val: aRGUMENTS.
 * Return: 1.
 */

int printf_char(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (1);

}

#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a given formatting function.
 * @name: Pointer to the name to be printed.
 * @f: Function pointer to the formatting function.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name); 
}

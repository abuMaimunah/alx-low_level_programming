#include "function_pointers.h"
/**
 * print_name - A function that prints a name dynamically
 * @name: The char name
 * @f: The function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

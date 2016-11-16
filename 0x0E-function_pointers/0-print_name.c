#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: name passed
 * @f: function passed
 */
void print_name(char *name, void (*f)(char *))
{
	void (*ptr)(char *);

	ptr = f;
	ptr(name);

}

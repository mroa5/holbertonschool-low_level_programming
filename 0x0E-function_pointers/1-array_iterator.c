#include "function_pointers.h"
/**
 * array_iterator - executes given param
 * @array: array
 * @size: size of array
 * @action: ptr
 *
 */
void array_iterator(int *array, unsigned int size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}

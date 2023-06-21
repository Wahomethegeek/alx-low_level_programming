#include "function_pointers.h"
/**
 * array_iterator - executes a function as a parameter
 * @size: array size
 * @action: pointer to the function you need to use
 * @array: to execute function on
 * Return:  void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}

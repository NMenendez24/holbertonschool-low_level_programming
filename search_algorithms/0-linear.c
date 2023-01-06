#include "search_algos.h"
#include <stdio.h>

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if(!array)
		return(-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if(array[i] == value)
		{
			return(array[i]);
		}
	}
	return(-1);
}

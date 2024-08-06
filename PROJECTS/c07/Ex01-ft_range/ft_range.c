#include <stdlib.h>

int *ft_range(int min, int max){

	int *arr;
	int i;
	int size;

	i = 0;

	if (min >= max){

		return NULL;

	}

	size = max - min;

	arr = (int *)malloc(size * sizeof(int));

	if (arr == NULL){

		return NULL;

	}

	while (i < size){

		arr[i++] = min++;
	}

	return arr;
}

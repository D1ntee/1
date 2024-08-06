#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max){
	
	int *arr;
	int i;
	int size;

	i = 0;
	size = max - min;

	if (min >= max){

		*range = NULL;
		return (0);

	}

	arr = (int *)malloc(sizeof(int) * size);

	if (!arr){
		
		return (-1);
	
	}

	while (max > min){
		
		arr[i++] = min++;
		
	}

	*range = arr;
	
	if (i > 0){

		return i;
	
	}

	return (-1);

}

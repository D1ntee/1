#include <stdlib.h>
#include <unistd.h>

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

	while (min < max){
		
		arr[i++] = min++;
		
	}

	*range = arr;
	
	if (i > 0){

		return i;
	
	}

	return (-1);

}

int main(void){

	int min;
	int max;
	int n;
	int i;
	int *range;
	char buffer[10];

	i = 0;
	range = NULL;
	min = 3;
	max = 7;

	n = ft_ultimate_range(&range, min, max);

	if (n == 0){

		write(1, "0", 1);

	}

	if (n < 0){

		write(1, "-", 1);
		n = -n;

	}

	while (n != 0){

		buffer[i++] = (n % 10) + '0';
		n /= 10;

	}

	while (i > 0){

		write (1, &buffer[--i], 1);

	}
	return 0;
}

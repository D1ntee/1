#include <stdlib.h>
#include <unistd.h>

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

int main(void){
	
	int min;
	int max;
	int *n;
	int i;
	int j;
	int num;
	int size;
	char buffer[11];
	
	min = 3;
	max = 7;
	i = 0;
	j = 0;
	
	n = ft_range(min, max);
	size = max - min;
	
	while (i < size){
		
		num = n[i];
		
		if (num == 0){
			
			write(1, "0", 1);
		
		}
		
		if (num < 0){
			
			write(1, "-", 1);
			num = -num;
		
		}
		
		while (num > 0) {
			
			buffer[j++] = (num % 10) + '0';
			num /= 10;
		}
		
		while (j > 0){
	
			write(1, &buffer[--j], 1);
		
		}
		
		write(1, " ", 1);
		i++;
	
	}

    free(n);
    return 0;
}


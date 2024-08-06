#include <stdlib.h>

char *ft_strdup(char *src){

	int i;
	int j;
	char *ptr;

	i = 0;
	j = 0;

	while (*(src + i)){

		i++;

	}

	ptr = (char *)malloc((i + 1)* sizeof(char));

	if (ptr == NULL){

		return NULL;

	}


	while (*(src + j)){

		*(ptr + j) = *(src + j);
		j++;

	}

	*(ptr + j) = '\0';

	return ptr;
}

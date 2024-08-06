#include <stdlib.h>
#include <errno.h>
#include <unistd.h>

char *ft_strdup(char *src){

	int i;
	int j;
	char *ptr;

	i = 0;
	j = 0;

	while (*(src + i)){

		i++;

	}

	ptr = (char *)malloc(i * sizeof(char));

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

int main(){

	char *str;
	char *c;
	int i;

	i = 0;

	str = "this string is your way to pass this exercise";

	c = ft_strdup(str);

	while (c[i] != '\0'){
		
		write(1, c + i, 1);
		i++;

	}



}

#include "unistd.h"
#include "stdio.h"

char *ft_strcpy(char *dest, char *src){

	int i;
	int j;
	char n[100];

	i = 0;

	while (*src != '\0'){
		n[i++] = src[i++];
		src++;
	}

	j = sizeof(n) / sizeof(n[0]);
	
	while (i < j ){

		if (src[i] != '\0'){
			dest[i] = src[i];

		} 
		else {
			dest[i] = '\0';
		}
		i++;
	}
	
	i = 0;
	while (i < j){
		write (1, &dest[i], 1);
		i++;
	}
	return dest;
}


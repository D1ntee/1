#include "unistd.h"
#include "stdio.h"

char *ft_strncpy(char *dest, char *src, unsigned int n) {

	int i;

	i = 0;
	
	while (i < n){

		if (*(src + i) != '\0'){
			dest[i] = src[i];

		} 
		else {
			dest[i] = '\0';
		}
		i++;
	}
	
	i = 0; 
	while (i < n){
		write (1, &dest[i], 1);
		i++;
	}
}


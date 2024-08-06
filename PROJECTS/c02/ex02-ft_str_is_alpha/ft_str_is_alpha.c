#include "unistd.h"
#include "stdio.h"

int ft_str_is_alpha(char *str) {

	int i, n, j, a, z;

	i = 0;
	a = 65;
	z = 122;
	n = 40;

	if (str[i] == '\0'){
		return 1;
	}
	
	while (str[i] != '\0'){
		
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z')){
			
			write (1,"0",1);
			return 0;
		}
		i++;
	}
}

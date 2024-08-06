#include <stddef.h>

char *ft_strstr(char *str, char *to_find){
	
	unsigned int i;
	unsigned int needle;
	unsigned int start;

	i = 0;
	needle = 0;
	start = 0;

	while (to_find[needle]){
	
		needle++;
	
	}

	while (str[i] != '\0'){

		if (str[i] == to_find[0]){

			while (str[i + start] == to_find[start]){

				start++;

				if (start == needle){

					return (&str[i]);
				}

			}

		}

		i++;
	}

	return (NULL);

}

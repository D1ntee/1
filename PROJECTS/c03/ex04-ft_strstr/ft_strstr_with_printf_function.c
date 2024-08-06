#include <unistd.h>
#include <stdio.h>


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

	

int main() {
    char *haystack = "let's go golfing!";
    char *needle = "go";

    char *result = ft_strstr(haystack, needle);

    if (result != NULL) {
        printf("The substring '%s' was found at '%s'\n", needle, result);
    } else {
        printf("The substring '%s' was not found in '%s'\n", needle, haystack);
    }

    return 0;
}


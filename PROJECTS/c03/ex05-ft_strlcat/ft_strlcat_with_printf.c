#include <stddef.h>
#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size){

	size_t dest_len;
	size_t i;
	size_t l;

	dest_len = 0;
	i = 0;

	while (dest[dest_len] != '\0'){

		dest_len++;

	}
	
	while (src[i] != '\0' && i < size - 1){
		
		dest[dest_len + i] = src[i];

		i++;
	}

	
	dest[dest_len + i] = '\0';
		
	return dest_len + i;


}

int main (void){

	char *src;
	unsigned int r;
	size_t i;
	size_t size;
	char dest[100] = "I can build rockets";
	
	src = "during a nap";

	i = 0;
	
	r = ft_strlcat(dest, src, sizeof(dest));
	
	printf("Resulting string: %s\n", dest);
	
	printf("Length: %u\n", r);

}


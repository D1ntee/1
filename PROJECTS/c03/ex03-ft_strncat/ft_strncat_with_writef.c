#include <unistd.h>

char *ft_strncat(char *dest, char *src, unsigned int n){
	
	size_t dest_len;
	size_t i;

	dest_len = 0;
	i = 0;

	while (dest[dest_len] != '\0'){

		dest_len++;

	}
	
	while (i < n && src[i] != '\0'){
		
		dest[dest_len + i] = src[i];

		i++;
	}

	
	dest[dest_len + i] = '\0';
	
	return dest;

}


int main (void){

	char *src;
	
	char *r;
	
	int i;

	int n;

	char dest[100] = "I can build rockets";
	
	src = "during a nap";

	i = 0;

	n = 4;
	
	ft_strncat(dest, src, n);

	write (1, dest, sizeof(dest));

}




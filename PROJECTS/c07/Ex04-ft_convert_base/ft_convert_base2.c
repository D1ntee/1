#include <stdlib.h>

int ft_strlen(char *base){

	int length;

	length = 0;

	while (base[length] != '\0'){

		length++;
	}

	return length;

}

int ft_isvalid_base(char *base) {

	int i;
	int j;
	int base_len;

	i = 0;

	
	base_len = ft_strlen(base);
	
	if (base_len < 1){
		
		return (0);
	
	}
	
	while (i < base_len) {
		
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127){
			
			return (0);

		}

		j = i + 1;

		while(j < base_len){
			
			if (base[i] == base[j]){
				
				return (0);
			
			}
			j++;
		}
		i++;
	}
	
	return 1;

}

int ft_strvalue(char c, char *base){

	int i;

	i = 0;

	while (c != base[i]){

		if (base[i] == c){

			return i;
		}
		i++;
	}

	return i;

}

char *ft_conv(int nbr, char *base){

	int base_len;
	int unbr;
	int len;
	int temp;
	char *result;

	temp = nbr;
	base_len = ft_strlen(base);

	if (nbr <= 0){

		len = 1;

	}
	else{
		len = 0;

	}
	
	while (temp) {
		
		temp /= base_len;
		len++;
	
	}

	result = (char *)malloc((len + 1) * sizeof(char));

	if (!result){
		
		return NULL;

	}

	result[len] = '\0';

	if (nbr < 0) {

		unbr = (unsigned int)(-nbr);

	}

	else {

		unbr = (unsigned int)nbr;

	}

	if (unbr == 0) {

		result[0] = base[0];

	}

	while (unbr > 0) {

		result[len - 1] = base[unbr % base_len];
		unbr /= base_len;
		len--;

	}
	
	if (nbr < 0) {
		
		result[0] = '-';
	
	}

	return result;

}

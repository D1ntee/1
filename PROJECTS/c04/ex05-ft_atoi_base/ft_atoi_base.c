#include <unistd.h>

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
		
		return 0;
	
	}
	
	while (i < base_len) {
		
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127){
			
			return 0;

		}

		j = i + 1;

		while(j < base_len){
			
			if (base[i] == base[j]){
				
				return 0;
			
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

		i++;
	}

	return i;

}

int ft_atoi_base(char *str, char * base){

	int i;
	int n;
	int sign;
	int integer;
	int result;
	int base_len;
	int value;

	i = 0;
	n = 0;
	sign = 1;
	integer = 0;
	base_len = ft_strlen(base);
	
	if (ft_isvalid_base(base) == 0) {
		
		return 0;
	
	} else {
		
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '){
			
			i++;
		
		}
		
		while (str[i] == '-' || str[i] == '+'){
			
			if (str[i] == '-'){
				
				n++;
			
			}
			
			i++;
		
		}
		
		if (n % 2 != 0){
			
			sign = -1;
		
		}
		
		while (str[i] != '\0'){
			
			value = ft_strvalue(str[i], base);
			
			if (value == -1 || value >= base_len){
				
				break;
			
			}
			
			integer = integer * base_len + value;
			i++;
		
		}
	}
	
	return sign * integer;

}

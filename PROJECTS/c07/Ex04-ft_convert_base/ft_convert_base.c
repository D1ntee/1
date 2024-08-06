#include "ft_convert_base2.c"

char *ft_convert_base(char *nbr, char *base_from, char *base_to){

	int i;
	int n;
	int sign;
	int integer;
	int result;
	int base_len;
	int value;
	char *cn;

	i = 0;
	n = 0;
	sign = 1;
	integer = 0;
	base_len = ft_strlen(base_from);
	
	if (!ft_isvalid_base(base_from) || !ft_isvalid_base(base_to)) {
		
		return NULL;
	
	} else {
		
		while ((nbr[i] >= 9 && nbr[i] <= 13) || nbr[i] == ' '){
			
			i++;
		
		}
		
		while (nbr[i] == '-' || nbr[i] == '+'){
			
			if (nbr[i] == '-'){
				
				n++;
			
			}
			
			i++;
		
		}
		
		if (n % 2 != 0){
			
			sign = -1;
		
		}
		
		while (nbr[i] != '\0'){
			
			value = ft_strvalue(nbr[i], base_from);
			
			if (value == -1 || value >= base_len){
				
				return NULL;
			
			}
			
			integer = integer * base_len + value;

			i++;
		
		}
	}
	
	result = sign * integer;

	cn = ft_conv(result, base_to);

	return cn;
}

int main(void){

	char *nbr;
	char *base_from;
	char *base_to;
	char *c;
	int i;

	i = 0;
	nbr = ",;,;,;";
	base_from = ";,";
	base_to = "0123456789";

	c = ft_convert_base(nbr, base_from, base_to);
	
	free(c);
	return 0;
}


int ft_atoi(char *str){

	int i;
	int n;
	int sign;
	int integer;

	i = 0;
	n = 0;
	sign = 1;
	integer = 0;

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
	
	while (str[i] >= '0' && str[i] <= '9'){
		
		integer = integer * 10 + (str[i] - 48);
		i++;
	
	}
	
	return sign * integer;

}

#include <unistd.h>

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

int main(void){

	char *str;
	char buffer[100];
	int length;
	int r;

	str = "   ---+--+1234ab567";
	length = 0;

	r = ft_atoi(str);
	
	if (r == 0){
		
		buffer[length++] = '0';
	}
	
	else {
		if (r < 0){
			
			write(1, "-", 1);
			r = -r;
		
		}
		
		while (r > 0){
			
			buffer[length++] = r % 10 + 48;
			r /= 10;
		
		}
	
	}
	
	while (length > 0){
		
		write (1, &buffer[--length], 1);
	
	}

}

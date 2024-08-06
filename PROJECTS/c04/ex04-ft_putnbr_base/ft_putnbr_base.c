#include <unistd.h>

int ft_strlen(char *str){

	int length = 0;
	
	while (str[length] != '\0') {
		
		length++;
	
	}
	
	return length;

}

int is_valid_base(char *base) {

	int i;
	int j;
	int base_len;

	i = 0;

	
	base_len = ft_strlen(base);
	
	if (base_len <= 1){
		
		return 0;
	
	}
	
	while (i < base_len) {
		
		if (base[i] == '+' || base[i] == '-'){
			
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

void ft_putnbr_base(int nbr, char *base) {
	
	char result[64];
	int base_len;
	int i;
	unsigned int unbr;
	
	base_len = ft_strlen(base);
        i = 0;

	if (!is_valid_base(base)){
		
		return;

	}
	
	if (nbr < 0) {
		
		write(1, "-", 1);
		
		unbr = (unsigned int)(-nbr);
	
	}
	
	else {
		
		unbr = (unsigned int)nbr;
	
	}
	
	if (unbr == 0) {
		
		write(1, &base[0], 1);
		
		return;
	
	}
	
	while (unbr > 0) {
		
		result[i++] = base[unbr % base_len];
		
		unbr /= base_len;
	
	}
	
	while (i > 0) {
		
		write(1, &result[--i], 1);
	
	}

}

int main(void) {
    char *base_decimal = "0123456789";
    char *base_hex = "0123456789ABCDEF";
    char *base_binary = "01";
    char *base_octal = "1234567";
    char *base_plus_minus = "+++++59-----8896ab";
    char *base_empty = "";

    ft_putnbr_base(42, base_decimal);
    write(1, "\n", 1);
    ft_putnbr_base(255, base_hex);
    write(1, "\n", 1);
    ft_putnbr_base(32, base_binary);
    write(1, "\n", 1);
    ft_putnbr_base(64, base_octal);
    write(1, "\n", 1);
    ft_putnbr_base(9, base_plus_minus);
    write(1, "\n", 1);
    ft_putnbr_base(13, base_empty);

    return 0;
}


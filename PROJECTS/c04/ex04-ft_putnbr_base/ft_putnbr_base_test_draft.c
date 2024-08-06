#include <unistd.h>


int ft_printhex (int n){

	char hex[64];
	int i;
	int remainder;

	i = 0;

	if (n == 0){

		hex[i++] = '0';

	} else {
		
		if (n < 0){
			
			write(1, "-", 1);
			n = -n;
		}

	}
	
	while (n != 0) {
		
		remainder = n % 16;
		
		if (remainder < 10) {
			
			hex[i++] = remainder + '0';
		
		}
		
		else {
			
			hex[i++] = remainder - 10 + 'A';
		
		}
		
		n /= 16;
	 
	 }


	while (i > 0){

		write (1, &hex[--i], 1);

	}

	return 0;
}

int ft_printbinary(int n){

	char binary[64];
	int i;

	i = 0;

	if (n == 0){

		write (1, "0", 1);
		return 0;

	}

	if (n < 0){

		write(1, "-", 1);
		n = -n;
	
	}

	while (n != 0){

		binary[i++] = n % 2 + '0';
		n = n / 2;

	}

	while (i > 0){

		write(1, &binary[--i], 1);
	}

	return 0;

}

int ft_printoctal(int n){
	
	char octal[64];
	int i;

	i = 0;

	if (n == 0){

		write (1, "0", 1);
		return 0;

	}

	if (n < 0){

		write(1, "-", 1);
		n = -n;
	
	}

	while (n != 0){

		octal[i++] = n % 8 + '0';
		n = n / 8;

	}

	while (i > 0){

		write(1, &octal[--i], 1);
	}
	
	return 0;

}

void ft_putnbr_base(int nbr, char *base){

	int n[10];
	int i;
	int base_len;

	i = 0;
	base_len = 0;

	while (base[base_len] != '\0'){

		base_len++;
	}

	if (base_len < 2){

		write(1, "0", 1);

	}

	if (base_len == 10){
		
		if (nbr == 0){
			
			write (1, "0", 1);
			return;
		}
			
		if (nbr < 0){
			
			nbr = -nbr;
			write (1,"-",1);
			
		}
			
		while (nbr != 0){
			
			n[i++] = (nbr % 10) + 48;
			nbr /= 10;
			
		}
			
		while (i > 0){
			
			write (1, &n[--i],1);
		
		}
	
	}
	
	else if (base_len == 16){
		
		ft_printhex(nbr);

	}
	
	else if (base_len == 2){
		
		ft_printbinary(nbr);
	
	}
	
	else if (base_len == 8){
		
		ft_printoctal(nbr);
	
	}

}


int main (void){

	char *base;
	char *base1;
	char *base2;
	char *base3;

	base = "0123456789";
	base1 = "0123456789abcdef";
	base2 = "01";
	base3 = "poneyvif";

	ft_putnbr_base(10, base);
	write(1, "\n", 1);
	ft_putnbr_base(255, base);
	write(1, "\n", 1);
	ft_putnbr_base(32, base);
	write(1, "\n", 1);
	ft_putnbr_base(64, base);

}

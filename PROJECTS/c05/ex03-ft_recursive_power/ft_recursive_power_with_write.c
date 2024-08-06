#include "unistd.h"

int ft_recursive_power(int nb, int power){

	if (power < 0){

		return 0;

	}

	if (power == 0){

		return 1;

	} else {
		
		return nb * ft_recursive_power(nb, power-1);
	}
}



int main(void){

	char buffer[30];
	int n;
	int i;

	n = ft_recursive_power(6, 4);
	i = 0;

	if (n == 0){

		write(1, "0", 1);

	}

	if (n < 0){

		write(1, "-", 1);
		n = -n;

	}

	while (n != 0){

		buffer[i++] = (n % 10) + '0';
		n /= 10;

	}

	while (i > 0){

		write (1, &buffer[--i], 1);

	}
}

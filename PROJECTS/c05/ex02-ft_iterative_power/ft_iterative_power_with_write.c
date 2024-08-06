#include "unistd.h"

int ft_iterative_power(int nb, int power){

	int i;
	int result;

	i = 1;
	result = nb;

	if (power < 0){

		return 0;

	}

	if (power == 0){

		return 1;

	}

	while (i < power){

		result *= nb;
		i++;

	}

	return result;
}



int main(void){

	char buffer[30];
	int n;
	int i;

	n = ft_iterative_power(90, 6);
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

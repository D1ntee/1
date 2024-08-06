#include <unistd.h>

int ft_recursive_factorial(int nb){

	unsigned int result;
	unsigned int i;

	i = 1;

	if (nb < 0){

		return 0;

	}

	if (nb == 0 || nb == 1){

		return 1;
	}

	if (nb > 0 && i <= nb){

		result = nb * ft_recursive_factorial(nb - 1);
	
	}

	return result;
}


int main(void){

	int n;
	int i;
	int buffer[10];

	n = ft_recursive_factorial(4);
	i = 0;


	while (n != 0){

		buffer[i++] = (n % 10) + '0';
		n /= 10;

	}

	while (i > 0){

		write (1, &buffer[--i], 1);

	}
}

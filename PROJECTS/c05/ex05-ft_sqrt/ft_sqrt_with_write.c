#include <unistd.h>


int ft_sqrt(int nb){

	int i;

	i = 0;

	if (nb < 0){

		return 0;

	}

	while ((i * i) <= nb){

		if ((i * i) == nb){

			return (i);

		}
		i++;
	}

	return 0;

}


int main (void){

	char buffer[30];
	int n;
	int i;

	n = ft_sqrt(49);
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

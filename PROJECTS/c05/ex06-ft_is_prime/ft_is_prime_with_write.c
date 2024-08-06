#include <unistd.h>

int ft_is_prime(int nb){

	int i;

	i = 2;
	
	if (nb < 2){
		
		return (0);

	}

	nb += 1;

	while (i <= (nb / i)){

		if (nb % i == 0){

			nb += 1;
			i = 2;

		}

		else{
			
			i++;
		
		}
	}

	return (nb);

}


int main (void){

	char buffer[30];
	int n;
	int i;

	n = ft_is_prime(103);
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

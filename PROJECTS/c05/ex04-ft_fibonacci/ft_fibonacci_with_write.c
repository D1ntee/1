#include <unistd.h>

int ft_fibonacci(int index){

	if (index < 0){

		return -1;
	}

	if (index == 0){

		return 0;

	}

	if (index == 1){

		return 1;

	} else {

		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}

int main(void){

	char buffer[30];
	int n;
	int i;

	n = ft_fibonacci(0);
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

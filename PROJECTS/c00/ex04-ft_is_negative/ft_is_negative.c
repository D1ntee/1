#include "unistd.h"

void ft_is_negative(int n){

	long nb;
	const char *c;
	char pos, neg;

	pos = 'P';
	neg = 'N';
	nb = n + 48;

	if (nb < 48) {
		write(1, &neg, 1);
	}

	else if (nb > 48){
		write (1, &pos, 1);
	}
	
	else if (nb == 48){
		write (1,"\nZero is neither positive nor negative\n", 39);
	}


}

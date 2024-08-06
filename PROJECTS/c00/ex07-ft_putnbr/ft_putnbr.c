#include <unistd.h>



int ft_putnbr(int nb){

	long nbl;
	int c[10];
	short i;

	nbl = nb;
	i = 0;

	if ( 0 == nbl ){
		write (1, "0", 1);
	}
	if (nbl < 0){
		nbl *= -1;
		write (1,"-",1);
	}	
	while (nbl % 10){
		c [i++] = (nbl % 10) + 48;
		nbl /= 10;
	}
	while (i >= 0)
		write (1, &c[--i],1);
}

//it looks like this in while (nbl % 10): [0,4, , , , , , , , ] other indexes are empty but index 0 and 1 have the values 0 and 4 and will be printed deremently, therefore we can acheive printing any number provided to the function

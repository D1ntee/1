#include <stdio.h>
#include "ft_print_combn.c"

int		main(void){	

	ft_print_combn(0);
	write(1, "\nCOMBO 1\n", 9);
	ft_print_combn(1);
	write(1, "\nCOMBO 2\n", 9);
	ft_print_combn(2);
	write(1, "\nCOMBO 3\n", 9);
	ft_print_combn(3);
	write(1, "\nCOMBO 4\n", 9);	
	ft_print_combn(4);
	write(1, "\nCOMBO 5\n", 9);
	ft_print_combn(5);
	write(1, "\nCOMBO 6\n", 9);
	ft_print_combn(6);
	write(1, "\nCOMBO 7\n", 9);
	ft_print_combn(7);
	write(1, "\nCOMBO 8\n", 9);
	ft_print_combn(8);
	write(1, "\nCOMBO 9\n", 9);
	ft_print_combn(9);
	write(1, "\nFINAL 'UNNECESSARY' COMBO\n", 27);
	ft_print_combn(10);
}

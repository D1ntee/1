#include "stdio.h"
#include "unistd.h"


void ft_swap (int *a, int *b){

	int n;

	n = *a;

	*a = *b;
	
	*b = n;

}



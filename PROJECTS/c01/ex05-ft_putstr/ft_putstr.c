#include "unistd.h"
#include "stdio.h"

void	ft_put_char(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str){
	
	while (*str != '\0'){
		
		putchar(*str);
		
		str++;
	}		
}


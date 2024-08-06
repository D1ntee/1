#include <unistd.h>


void ft_printalphabets (void){

	char count;
	

	for (count = 97; count<=122; count++) {
		
		write (1,&count,1);
	}
}

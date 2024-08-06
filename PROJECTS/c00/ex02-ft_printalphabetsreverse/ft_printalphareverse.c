#include <unistd.h>


void ft_printalphareverse(void){

	char count;

	for (count=122; count>=97; count--) {

		write (1,&count,1);
	}
}

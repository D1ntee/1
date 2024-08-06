#include "unistd.h"
#include "ft_strcapitalize.c"


int main (){

	char *str;
	char *r;
	

	char arr[61] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	str = arr;

	r = ft_strcapitalize(str);

	write (1, r, 61);

}

	

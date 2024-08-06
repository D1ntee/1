
#include <unistd.h>

void ft_print_comb2(void){

	int a, b, c, d;

	a = 48;
	b = 48;
	c = 48;
	d = 48;


	while (a <= 57){
		b = 48;
		while (b <= 57){
			c = a;
			while (c <= 57){
				d = (c == a) ? b + 1 : 48;
				while (d <= 57){
					write (1,&a,1);
					write (1,&b,1);
					write (1," ",1);
					write (1,&c,1);
					write (1,&d,1);
					
					if (a != 57 || b != 56 || c != 57 || d != 57){
						write (1,",",1);
					}
					d++;
				}
				c++;
			}
			b++;
		} 
		a++;
	}
}






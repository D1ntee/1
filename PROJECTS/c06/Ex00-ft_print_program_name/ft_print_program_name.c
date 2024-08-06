#include <unistd.h>

char ft_print_program_name(int n, char *c){

	int i;

	i = 0;

	while(i < n){
		
		write(1, c, sizeof(c) + 2);
		i++;
	}

	return 0;
}



int main(int argc, char *argv[]){

	ft_print_program_name(argc, argv[0]);
	return (0);
}

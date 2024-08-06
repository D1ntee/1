#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;

	(void)argc;

	while (argv[i]){

		while (argv[i][j]){
			
			ft_putchar(argv[i][j]);
			j++;

		}

		ft_putchar('\n');
		i++;
		j = 0;

	}
	
	return (0);

}

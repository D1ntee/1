#include <unistd.h>

void ft_putstr(char *str){

        while (*str){

                write(1, str, 1);
                str++;

        }

        write(1, "\n", 1);

}

int ft_strcmp(char *s1, char *s2) {
	
	while (*s1 && (*s1 == *s2)) {
		
		s1++;
		s2++;
	
	}
	
	return *(unsigned char *)s1 - *(unsigned char *)s2;

}

void ft_sort_args(char **argv, int argc){
	
	int i;
	int j;
	char *temp;
	
	i = 1;
	
	while (i < argc - 1){
		
		j = 1;
		
		while (j < argc - 1){
			
			if (ft_strcmp(argv[j], argv[j + 1]) > 0) {
				
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			
			}
			
			j++;
		
		}
		
		i++;
	
	}

}

int main(int argc, char **argv){
	
	int i;
	i = 1;

	ft_sort_args(argv, argc);
	
	while (i < argc){
		
		ft_putstr(argv[i]);
		i++;
	}
    
    return 0;

}

#include "unistd.h"

// Utility function to print an integer using write
void putnbr(int n) {
	char buffer[12]; // Buffer large enough for an integer    
	int i = 0;

    // Handle negative numbers
    
	if (n < 0) {

		write(1, "-", 1);
        
		n = -n;
    
	}

    // Convert integer to string in reverse
    
	do {
        
		buffer[i++] = (n % 10) + '0';
        
		n /= 10;
   
       	} while (n > 0);

    // Print the digits in correct order
    
	while (i > 0) {
        
		write(1, &buffer[--i], 1);
    
	}
   
       	write(1, " ", 1); // Space separator

}

void ft_sort_int_tab(int *tab, int size) {
    
	int i, j, s;

	i = 0;
	s = 0;
	
	while (i < size - 1){
		
		j = i + 1;
		
		while (j < size) {
			if (tab[i] > tab[j]){
				
				s = *(tab + i);
				*(tab + i) = *(tab + j);
				*(tab + j) = s;
			}
			j++;
		}
		i++;
	}
	
	i = 0;
	while (i < size) {
		putnbr(tab[i]);
		i++;
	}
}

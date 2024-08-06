#include "unistd.h"

// Utility function to print an integer using write
void putnbr(int j) {
	char buffer[12]; // Buffer large enough for an integer
    
	int i = 0;

    // Handle negative numbers
    
	if (j < 0) {
        
		write(1, "-", 1);
        
		j = -j;
    
	}

    // Convert integer to string in reverse
    
	do {
        
		buffer[i++] = (j % 10) + '0';
        
		j /= 10;
   
       	} while (j > 0);

    // Print the digits in correct order
    
	while (i > 0) {
        
		write(1, &buffer[--i], 1);
    
	}
   
       	write(1, " ", 1); // Space separator

}


void ft_rev_int_tab(int *tab, int size) {
    
	int i = 0;
    
	int temp;

    // Reverse the array
    
	while (i < size / 2) {
        
		temp = tab[i];
        
		tab[i] = tab[size - i - 1];
        
		tab[size - i - 1] = temp;
        
		i++;
    
	}

    // Print the reversed array
    
	i = 0;
    
	while (i < size) {
        
		putnbr(tab[i]);
        
		i++;
    
	}
    
	write(1, "\n", 1); // Newline at the end

}

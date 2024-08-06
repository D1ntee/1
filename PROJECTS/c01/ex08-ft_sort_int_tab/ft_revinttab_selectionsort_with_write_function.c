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

void swap(int *a, int *b) {
	
	int temp; 
	
	temp = *a;
	*a = *b;
	*b = temp;
}




void ft_sort_int_tab(int *tab, int size) {
    
	int i, j;
	int min_idx;

	i = 0;
	
	while (i < size - 1){
		
		j = i + 1;
		min_idx = i;
		
		while (j < size) {
			if (tab[j] < tab[min_idx]){

				min_idx = j;
			}
			j++;
		}

		if (min_idx != i){
			swap (&tab[min_idx], &tab[i]);
		}
		i++;
	}
	
	i = 0;
	while (i < size) {
		putnbr(tab[i]);
		i++;
	}
}

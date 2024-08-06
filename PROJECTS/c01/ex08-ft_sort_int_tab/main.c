#include "ft_sort_inttab_with_write_function.c"

int main(){

        int *tab;
        int size;
	
	int arr[9] = {1,-242,2,-4,43,-126,-78,48,92};

        size = sizeof(arr) / sizeof(arr[0]);
        
        tab = arr;

        ft_sort_int_tab(tab, size);

}

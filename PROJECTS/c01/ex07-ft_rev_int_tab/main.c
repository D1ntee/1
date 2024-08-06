#include "ft_rev_int_tab.c"

int main(){

        int *tab;
        int size;
	
	int arr[9] = {1,2,3,4,5,6,7,8,9};

        size = sizeof(arr) / sizeof(arr[0]);
        
        tab = arr;

        ft_rev_int_tab(tab, size);

}

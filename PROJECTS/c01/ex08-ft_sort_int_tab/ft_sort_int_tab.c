
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

}

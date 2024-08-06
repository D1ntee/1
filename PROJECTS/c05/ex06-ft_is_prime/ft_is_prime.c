
int ft_is_prime(int nb){

	int i;

	i = 2;
	
	if (nb < 2){
		
		return (0);

	}

	nb += 1;

	while (i <= (nb / i)){

		if (nb % i == 0){

			nb += 1;
			i = 2;

		}

		else{
			
			i++;
		
		}
	}

	return (nb);

}

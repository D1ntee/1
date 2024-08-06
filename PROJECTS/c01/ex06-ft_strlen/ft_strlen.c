

int ft_strlen (char *str){

	int temp;
	temp = 0;

	while (*str != '\0'){

		*str++;
		temp++;

	}
	return temp;

}




char ft_strlowcase(char *str){

	int i;
	i = 0;

	while (str[i]){
		
		if (str[i] >= 65 && str[i] <= 90){
			
			str[i] = str[i] + 32;
		
		}
		i++;
	}
}


char *ft_strcapitalize(char *str){

	int i;
	i = 0;

	ft_strlowcase(str);

	while (str[i] != '\0'){

		if (i == 0){
			
			if (str[i] >= 'a' && str[i] <= 'z'){
				
				str[i] = str[i] - 32;
			}
		}
		
		while (str[i] >= 32 && str[i] <= 47 || str[i] >= 59 && str[i] <= 64 || str[i] >= 91 && str[i] <= 96 || str[i] >= 123 && str[i] <= 126){

			i = i + 1;
			
			if (str[i] >= 'a' && str[i] <= 'z'){

				str[i] = str[i] - 32;
			}else{
				++i;
				
				if (str[i] >= 'a' && str[i] <= 'z'){
					
					str[i] = str[i] - 32;
				}

			}
			i++;
		}
		i++;
	}
	
	return str;
}

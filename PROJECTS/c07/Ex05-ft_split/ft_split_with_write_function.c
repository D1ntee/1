#include <unistd.h>
#include <stdlib.h>

void ft_putstr(char *str){
	
	int i;

	i = 0;
	
	while (str[i] != '\0') {
		
		write(1, &str[i], 1);
		i++;
	}
}

int is_sep(char c, char *charset) {
	
	int i;

	i = 0;
	
	while (charset[i] != '\0') {
		
		if (c == charset[i]){
			
			return 1;
		
		}
		
		i++;
	}
	return 0;
}

int ft_nofstrs(char *str, char *charset) {
	
	int counter;
	int i;
	
	counter = 0;
	i = 0;

	while (str[i] != '\0'){
		
		while (str[i] != '\0' && is_sep(str[i], charset)) {
			
			i++;
		
		}
		
		if (str[i] != '\0') {
			
			counter++;
			
			while (str[i] != '\0' && !is_sep(str[i], charset)){
				
				i++;
			
			}
		
		}
	
	}
	
	return counter;
}

char **ft_split(char *str, char *charset) {
	
	char **arr;
	int size;
	int i;
	int j;
	int word_len;
	int p;

	i = 0;
	j = 0;
	word_len = 0;
	p = 0;

	size = ft_nofstrs(str, charset);
	
	arr = (char **)malloc((size + 1) * sizeof(char *));
	
	if (!arr) {
		
		return NULL;
	}
	
	while (str[i] != '\0' && j < size) {
		
		while (str[i] != '\0' && is_sep(str[i], charset)) {
			
			i++;
		
		}
		
		word_len = 0;
		
		while (str[i + word_len] != '\0' && !is_sep(str[i + word_len], charset)) {
			
			word_len++;
		
		}
		
		if (word_len > 0) {
			
			arr[j] = (char *)malloc((word_len + 1) * sizeof(char));
			
			if (!arr[j]) {
				
				while (j > 0) {
					
					free(arr[--j]);
				}
				
				free(arr);
				
				return NULL;
			}
			
			p = 0;
			
			while (p < word_len) {
				
				arr[j][p] = str[i + p];
				p++;
			
			}
			
			arr[j][p] = '\0';
			j++;
		
		}
		
		i += word_len;
	
	}
	
	arr[j] = NULL;
	return arr;
}

int main(void) {
	
	char *str;
	char *charset;
	char **r;
	int i;
	
	str = "apple,banana/tomato;melon'orange";
        charset = "',;|\\?/";
        r = ft_split(str, charset);

	if (r) {
		
		i = 0;
		
		while (r[i] != NULL) {
			
			ft_putstr(r[i]);
			write(1, "\n", 1);
			i++;
		
		}
		
		free(r);
	}
	
	return 0;
}

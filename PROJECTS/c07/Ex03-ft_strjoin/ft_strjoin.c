#include <stdlib.h>

int ft_strlen(int size, char **strs, char *sep){

	int i;
	int j;
	int s;
	int length;

	i = 0;
	j = 0;
	s = 0;
	length = 0;

	while (i < size){

		j = 0;
		s = 0;

		while(strs[i][j] != '\0'){

			j++;
			length++;

		}

		if (i < size - 1){

			while (sep[s] != '\0'){
				
				length++;
				s++;
			
			}
		
		}

		i++;

	}

	return length;

}



char *ft_strjoin(int size, char **strs, char *sep){

	char *arr;
	int i;
	int j;
	int k;
	int l;
	int s;
	char *empty_str;

	i = 0;
	j = 0;
	k = 0;
	s = 0;
	
	if (size == 0) {
		
		empty_str = (char *)malloc(1 * sizeof(char));
		
		if (empty_str == NULL) {
			
			return NULL;
		
		}
		
		empty_str[0] = '\0';
		
		return empty_str;

	}


	l = ft_strlen(size, strs, sep);

	arr = (char *)malloc((l + 1) * sizeof(char));

	
	if (!arr){

		return NULL;

	}

	while (i < size){

		j = 0;
		s = 0;
		
		while (strs[i][j] != '\0'){
			
			arr[k] = strs[i][j];
			j++;
			k++;

		}
		
		if (i < size - 1){

			while (sep[s] != '\0'){
				
				arr[k] = sep[s];
				s++;
				k++;

			}
		
		}

		i++;


	}

	
	arr[k] = '\0';

	return arr;

}

int main(void){

	int size;
	char *sep;
	
	char *strs[5] = {"apple", "banana", "tomato", "melon", "orange"};
	size = 5;
	sep = ",";

	ft_strjoin(size, strs, sep);

}

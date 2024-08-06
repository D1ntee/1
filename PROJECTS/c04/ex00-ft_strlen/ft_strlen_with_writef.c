#include <unistd.h>

int ft_strlen(char *str){

	unsigned int i;

	i = 0;

	while (str[i] != '\0'){

		i++;
	}

	return i;
}

int main(void){

	char *str;
	int r;
	int buffer[10];
	int start;
	int end;
	int temp;
	int i;

	i = 0;

	str = "this string is your way to pass this exercise";

	r = ft_strlen(str);

	while (r > 0){

		buffer[i++] = (r % 10) + '0';
		r /= 10;

	}

	buffer[i] = '\0';
	
	start = 0;
	end = i - 1;


	while (start < end){

		temp = buffer[start];
		buffer[start] = buffer[end];
		buffer[end] = temp;

		start++;
		end--;

	}

	write(1, buffer, 10);

}

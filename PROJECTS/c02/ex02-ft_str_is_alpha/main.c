#include "ft_str_is_alpha.c"

int main(){

        char *str;
	
	char arr[40] = "Invite me to a hamburger banquet\0";
        
        str = arr;

        ft_str_is_alpha(str);
}

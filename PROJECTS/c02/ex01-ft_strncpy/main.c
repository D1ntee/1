#include "ft_strncpy_with_write_function.c"

int main(){

        char *src;
        char *dest;
	unsigned int n;
	
	char arr[33] = "Invite me to a hamburger banquet\0";
	char arrdest[33];
        
        src = arr;
	dest = arrdest;

	n = 33;

        *ft_strncpy(dest, src, n);

}

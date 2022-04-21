#include <stdio.h>
#include "printf.h"

int main() {
	char *str = "Olá mundo!";
	char c = 'a';

	// printf("%d\n", ft_printf("%s\n", str));
	// printf("%d\n", printf("%s\n", str));

	// printf("%d\n", ft_printf("%c\n", c));
	// printf("%d\n", printf("%c\n", c));

	// printf("%d\n", ft_printf("%p\n", str));
	// printf("%d\n", printf("%p\n", str));

	// printf("%d\n", ft_printf("%d\n", 99000));
	// printf("%d\n", printf("%d\n", 99000));

	// printf("%d\n", ft_printf("%i\n", -99000));
	// printf("%d\n", printf("%i\n", -99000));

	printf("%d\n", ft_printf("%u\n", -99000));
	printf("%d\n", printf("%u\n", -99000));

	return(0);
}

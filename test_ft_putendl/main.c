#include "libft.h"

void	ft_putstr(char *str);

int		main(void)
{
	printf("\n<tab> -> \n");
	ft_putendl("	");
	printf("*************\n");

	printf("\ntest abcd 123 !*? -> \n");
	ft_putendl("test abcd 123 !*?");
	printf("*************\n");

	printf("\nempty null char -> \n");
	ft_putendl('\0');
	printf("*************\n");

	return (0);
}

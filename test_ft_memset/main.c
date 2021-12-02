#include "libft.h"

int		main(void)
{
	char str[50];

	strcpy(str,"\nThis is a string");
	puts(str);

	printf("\nmemset -> string replaced with 20 $:\n");
	memset(str,'$', 20);
	puts(str);

	strcpy(str,"\nThis is a string");
	printf("\nft_memset -> string replaced with 20 $:\n");
	ft_memset(str,'$', 20);
	puts(str);

	printf("\n");

	return(0);
}

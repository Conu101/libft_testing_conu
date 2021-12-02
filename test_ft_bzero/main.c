#include "libft.h"

int		main(void)
{
	char str[50];

	strcpy(str,"\nThis is a string");
	puts(str);

	printf("\nbzero -> string replaced with 20 0\n");
	bzero(str, 20);
	puts(str);

	strcpy(str,"\nThis is a string");
	printf("\nft_bzero -> string replaced with 20 0\n");
	ft_bzero(str, 20);
	puts(str);

	strcpy(str,"\nThis is a string");
	printf("\nbzero -> string left intact (n = 0)\n");
	bzero(str, 0);
	puts(str);

	strcpy(str,"\nThis is a string");
	printf("\nft_bzero -> string left intact (n = 0)\n");
	ft_bzero(str, 0);
	puts(str);

	printf("\n");

	return(0);
}

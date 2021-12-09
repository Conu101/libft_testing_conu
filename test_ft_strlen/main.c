#include "libft.h"

int	main()
{
	char *str = "test";

	printf("String tested: %s\n", str);

	printf("Length of string is with strlen: %lu", strlen(str));

	printf("\n-\n");

	printf("Length of string is with ft_strlen: %lu\n", ft_strlen(str));

	return 0;
}

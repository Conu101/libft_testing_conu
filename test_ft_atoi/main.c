#include "libft.h"

int		main(void)
{
	printf("\n<min int> -2147483648 \n");
	printf("ft_atoi : %d\n", ft_atoi("-2147483648"));
	printf("atoi : %d\n", atoi("-2147483648"));
	printf("\n");

	printf("\n<max int> 2147483647 \n");
	printf("ft_atoi : %d\n", ft_atoi("2147483647"));
	printf("atoi : %d\n", atoi("2147483647"));
	printf("\n");

	printf("<some number> 123456789\n");
	printf("ft_atoi : %d\n", ft_atoi("123456789"));
	printf("atoi : %d\n", atoi("123456789"));
	printf("\n");

	printf("\n<above max int> 2147483648 \n");
	printf("ft_atoi : %d\n", ft_atoi("2147483648"));
	printf("atoi : %d\n", atoi("2147483648"));
	printf("\n");

	printf("\n<letters and digits> abcd 1234 \n");
	printf("ft_atoi : %d\n", ft_atoi("abcd 1234"));
	printf("atoi : %d\n", atoi("abcd 1234"));
	printf("\n");

	printf("\n<whitespaces, digits and letters >   1234 abcd \n");
	printf("ft_atoi : %d\n", ft_atoi("   1234 abcd"));
	printf("atoi : %d\n", atoi("   1234 abcd"));
	printf("\n");

	printf("\n< 3 whitespaces, -digits, whitespace and letters >   -5678 abcd \n");
	printf("ft_atoi : %d\n", ft_atoi("   -5678 abcd"));
	printf("atoi : %d\n", atoi("   -5678 abcd"));
	printf("\n");

	return (0);
}

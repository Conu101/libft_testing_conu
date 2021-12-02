#include "libft.h"

int		ft_toupper(int c);

int		main(void)
{
	int		i;
	char	c;
	
	i = 0;
	while (i <= 127)
	{
		c = i;
		printf("\nchar  %c int %d \ntoupper returns %d for %c\n", c, i, toupper(i), toupper(i));
		printf("ft_toupper returns %d for %c\n", ft_toupper(i), ft_toupper(i));
		printf("\n");
		i++;
	}

	return (0);
}

#include "libft.h"

int		ft_tolower(int c);

int		main(void)
{
	int		i;
	char	c;
	
	i = 0;
	while (i <= 127)
	{
		c = i;
		printf("\nchar  %c int %d \ntolower returns %d for %c\n", c, i, tolower(i), tolower(i));
		printf("ft_tolower returns %d for %c\n", ft_tolower(i), ft_tolower(i));
		printf("\n");
		i++;
	}

	return (0);
}

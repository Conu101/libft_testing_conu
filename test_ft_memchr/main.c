#include "libft.h"

int main(void)
{
	char str[] = "ABCDEFG";
	char *ps = memchr(str, 'D', strlen(str));
	if (ps != NULL)
		printf ("search character found with memchr:  %s\n", ps);
	else
		printf ("search character not found with memchr\n");

	char *pt = ft_memchr(str, 'D', strlen(str));
	if (pt != NULL)
		printf ("search character found with ft_memchr:  %s\n", pt);
	else
		printf ("search character not found with ft_memchr\n");

	return 0;
}

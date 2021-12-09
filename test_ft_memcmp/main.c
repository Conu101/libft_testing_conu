#include "libft.h"

int main() 
{
	char	str1[15];
	char	str2[15];
	int		ret;
	int		res;

	memcpy(str1, "abcdef", 6);
	memcpy(str2, "ABCDEF", 6);

	ret = memcmp(str1, str2, 5);

	if(ret > 0) {
		printf("memcmp : str2 is less than str1");
	} else if(ret < 0) {
		printf("memcmp : str1 is less than str2");
	} else {
		printf("memcmp : str1 is equal to str2");
	}
	
	printf("\n-\n");

	res = ft_memcmp(str1, str2, 5);

	if(res > 0) {
		printf("ft_memcmp : str2 is less than str1");
	} else if(res < 0) {
		printf("ft_memcmp : str1 is less than str2");
	} else {
		printf("ft_memcmp : str1 is equal to str2");
	}

	printf("\n");

	return(0);
}

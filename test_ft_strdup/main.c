#include "libft.h"

int	main()
{
	char source[] = "Some string to duplicate";

	// A copy of source is created dynamically
	// and pointer to copy is returned.

	char* target = strdup(source);

	printf("result with strdup: %s", target);

	printf("\n-\n");

	char* targetft = ft_strdup(source);
	printf("result with ft_strdup: %s\n", targetft);

	return 0;
	}

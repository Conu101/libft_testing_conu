
#include "libft.h"

int	main(void)
{
	/* Create a place to store our results */
	void	*result;

	/* Create two arrays to hold our data */
	char	original[50];
	char	newcopy[50];

	/* Copy a string into the original array */
	strcpy(original, "Long string of 29 characters");

	/* Display the contents of the original copy */
	printf("%s\n", original);

	/* Apply memccpy*/
	result = memccpy(newcopy, original, 'b', 10);

	/* Display the results from memccpy*/
	printf("result after applying memccpy:\n");
	printf("%s\n", result);

	/* Apply ft_memccpy*/
	result = ft_memccpy(newcopy, original, 'b', 10);

	/* Display the results from ft_memccpy*/
	printf("result after applying ft_memccpy:\n");
	printf("%s\n", result);

	return 0;
}

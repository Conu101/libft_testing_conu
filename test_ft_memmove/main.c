
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

	/* Copy the first 11 characters of the original
		array into the newcopy array */
	result = ft_memmove(newcopy, original, 11);

	/* Set the character at position 11 to a null (char 0)
		in the newcopy array to ensure the string is terminated
		(This is important since memmove does not initialize memory
		and printf expects a null at the end of a string) */
	newcopy[11] = '\0';

	/* Display the contents of the original copy */
	printf("%s\n", original);

	/* Display the contents of the new copy */
	printf("result with 11 first characters of the previous line:\n");
	printf("%s\n", newcopy);

	return 0;
}

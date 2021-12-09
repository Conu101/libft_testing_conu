/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouve <ctrouve@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:40:54 by ctrouve           #+#    #+#             */
/*   Updated: 2021/12/09 15:42:39 by ctrouve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strdup() and strndup() functions are used to duplicate a string. 
** Syntax : char *strdup(const char *s); 
** This function returns a pointer to a null-terminated byte string, 
** which is a duplicate of the string pointed to by s. The memory obtained 
** is done dynamically using malloc and hence it can be freed using free().
** It returns a pointer to the duplicated string s.
*/

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(*src) * (ft_strlen((char *)src) + 1));
	if (dest == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:14:46 by vsimeono          #+#    #+#             */
/*   Updated: 2021/09/29 13:25:55 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		nlen;

	j = 0;
	if (!*needle)
		return ((char *)haystack);
	nlen = ft_strlen(needle);
	while (j < len && haystack[j] != '\0')
	{
		i = 0;
		while (haystack[j] == needle[i] && needle[i] != '\0')
		{
			if (j > len)
				return (NULL);
			i++;
			j++;
		}
		if (i == nlen)
			return (((char *)haystack) + j - nlen);
		j++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 15:55:15 by vsimeono          #+#    #+#             */
/*   Updated: 2021/09/24 20:01:10 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*p;

	i = 0;
	p = (char *)s;
	while (i < (int) n)
	{
		if (*(p + i) == c)
		{
			return (p + i);
		}
		i++;
	}
	return (NULL);
}

// int		main()
// {
// 	char	str[] = "Non A nobis solum nati sumus";
// 	int		c;
// 	size_t	n;

// 	c = 97;
// 	n = 20;
// 	// memchr(str, c, n);
// 	printf("%s", ft_memchr(str, c, n));
// }
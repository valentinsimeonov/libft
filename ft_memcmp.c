/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 16:45:27 by vsimeono          #+#    #+#             */
/*   Updated: 2021/09/24 20:02:35 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (i < n)
	{
		if (*(p1 + i) != *(p2 + i))
			return (*(p1 + i) - *(p2 + i));
		i++;
	}
	return (0);
}

// int		main()
// {
// 	char	str1[] = "Fas est ab hoste doceri";
// 	char	str2[] = "Fas est aA hoste doceri";
// 	int		n;

// 	n = 24;
// 	printf("%d", ft_memcmp(str1, str2, n));
// }
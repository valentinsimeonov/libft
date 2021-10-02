/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 19:53:49 by vsimeono          #+#    #+#             */
/*   Updated: 2021/09/25 16:41:03 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (len-- > 0)
		{
			*(d + len) = *(s + len);
		}
	}
	else
	{
		while (len-- > 0)
		{
			*(d + i) = *(s + i);
			i++;
		}
	}
	return (d);
}

// int		main()
// {
// 	char		src[11];
// 	char		dst[4];
// 	size_t		n;

// 	src[0] = 'P';
// 	src[1] = 'r';
// 	src[2] = 'i';
// 	src[3] = 'm';
// 	src[4] = 'a';
// 	src[5] = 'D';
// 	src[6] = 'o';
// 	src[7] = 'u';
// 	src[8] = 'a';
// 	src[9] = 'F';
// 	src[10] = '\0';
// 	dst[0] = 'B';
// 	dst[1] = 'B';
// 	dst[2] = 'B';
// 	dst[3] = '\0';
// 	n = 4;
// 	ft_memmove(dst, src, n);
// 	// ft_memcpy(dst, &src[0], n);
// 	printf("%s\n", dst);
// 	// printf("%s", src);

// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 14:23:37 by vsimeono          #+#    #+#             */
/*   Updated: 2021/10/02 19:47:39 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < (int) n)
	{
		*(d + i) = *(s + i);
		i++;
	}
	return (dst);
}

// int		main()
// {
// 	char		src[11];
// 	char		dst[4];
// 	size_t		n;

// 	src[0] = 'A';
// 	src[1] = 's';
// 	src[2] = 't';
// 	src[3] = 'a';
// 	src[4] = 'L';
// 	src[5] = 'V';
// 	src[6] = 'i';
// 	src[7] = 's';
// 	src[8] = 't';
// 	src[9] = 'o';
// 	src[10] = '\0';
// 	dst[0] = 'B';
// 	dst[1] = 'B';
// 	dst[2] = 'B';
// 	dst[3] = '\0';
// 	n = 9;
// 	// ft_memcpy(dst, src, n);
// 	ft_memcpy(src, &src[3], n);
// 	printf("%s\n", dst);
// 	printf("%s", src);

// }
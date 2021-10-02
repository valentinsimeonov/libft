/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:07:17 by vsimeono          #+#    #+#             */
/*   Updated: 2021/09/24 20:06:41 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int		i;
	char	*p;

	i = 0;
	p = (char *)b;
	while (i < (int) len)
	{
		*(p + i) = c;
		i++;
	}
	return (p);
}

// int		main()
// {
// 	char	str[4];
// 	str[0] = 'N';
// 	str[1] = 'o';
// 	str[2] = 'c';
// 	str[3] = '\0';
// 	ft_memset(str, 65, 1);
// 	printf("%s", str);
// // 	// printf("%s", ft_memset(str, 1, 15));
// // 	// printf("%c", 'a');
// // 	return (0);
// }
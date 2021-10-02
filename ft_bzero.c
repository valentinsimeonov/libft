/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 13:37:39 by vsimeono          #+#    #+#             */
/*   Updated: 2021/09/24 19:52:19 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int		i;
	char	*p;

	i = 0;
	p = (char *)s;
	while (i < (int) n)
	{
		*(p + i) = '\0';
		i++;
	}
}

// int		main()
// {
// 	int			i;
// 	char		str[4];

// 	i = 3;
// 	str[0] = 'A';
// 	str[1] = 'B';
// 	str[2] = 'C';
// 	str[3] = '\0';

// 	ft_bzero(str, i);
// 	printf("%c", str[2]);
// }
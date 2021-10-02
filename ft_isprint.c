/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 16:40:30 by vsimeono          #+#    #+#             */
/*   Updated: 2021/09/24 19:59:21 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// int     ft_isprint(int c);

// int		main()
// {d
//     int     i;
//     char    c;

//     i = 44;
//     c = 'A';

//     printf("%d", ft_isprint(i));
// }
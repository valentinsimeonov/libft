/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 18:40:37 by vsimeono          #+#    #+#             */
/*   Updated: 2021/09/24 19:58:00 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int     ft_isascii(int c);

// int     main()
// {
//     int     i;
//     char    c;

//     i = 1;
//     c = 'A';

//     printf("%d", ft_isascii(i));
// }
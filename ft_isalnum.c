/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 18:26:40 by vsimeono          #+#    #+#             */
/*   Updated: 2021/09/25 16:34:07 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

// int        ft_isalnum(int c);

// int     main()
// {
//     int     i;
//     char    c;

//     i = 1;
//     c = '|';

//     printf("%d", ft_isalnum(c));
// }
// (c >= '0' && c <= '9')
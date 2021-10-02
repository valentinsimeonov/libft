/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 14:45:40 by vsimeono          #+#    #+#             */
/*   Updated: 2021/09/24 19:58:37 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

// int     ft_isdigit(int c);

// int     main()
// {
//     int     i;
//     char    c;

//     i = 1;
//     c = 'A';

//     printf("%d", ft_isdigit(i));
// }
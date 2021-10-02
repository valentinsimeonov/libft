/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 15:22:19 by vsimeono          #+#    #+#             */
/*   Updated: 2021/09/24 19:56:50 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

// int     ft_isalpha(int c);

// int     main()
// {
//     int     i;
//     char    c;

//     i = 1;
//     c = 'a';
//     printf("%d", ft_isalpha(i));
// }
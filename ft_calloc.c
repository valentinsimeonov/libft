/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 14:21:50 by vsimeono          #+#    #+#             */
/*   Updated: 2021/09/24 19:53:47 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		i;
	void	*p;

	i = 0;
	p = malloc(count * size);
	if (!p)
	{
		return (NULL);
	}
	ft_bzero(p, count * size);
	return (p);
}

// int		main()
// {
// 	char 	str[] = "mit karte betzalen";
// 	int		len;
// 	char*	p;
// 	int*	t;

// 	len = 18;
// 	t = (int*)str;
// 	printf("%p\n", t);
// 	p = calloc(len, sizeof(char));
// 	printf("%p\n", p);
// }

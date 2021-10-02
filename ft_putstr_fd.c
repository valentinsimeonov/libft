/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 19:31:50 by vsimeono          #+#    #+#             */
/*   Updated: 2021/09/24 20:08:48 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
	{
		while (*s)
		{
			write(fd, s++, 1);
		}
	}
}

// int		main()
// {
// 	char	str[4];
// 	int		fd;
// 	char	c;

// 	fd = 1;
// 	str[0] = 'A';
// 	str[1] = 'A';
// 	str[2] = 'b';
// 	str[3] = 't';
// 	c = ft_putstr_fd(str, fd);
// 	printf("%c", c);
// }
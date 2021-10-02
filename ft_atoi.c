/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:21:05 by vsimeono          #+#    #+#             */
/*   Updated: 2021/09/24 19:49:53 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		num;
	int		sign;

	i = 0;
	sign = 1;
	num = 0;
	while ((*(str + i) >= 9 && *(str + i) <= 13) || (*(str + i) == ' '))
	{
		i++;
	}
	if (*(str + i) == '-' || *(str + i) == '+')
	{
		if (*(str + i) == '-')
		{
			sign = sign * (-1);
		}
		i++;
	}
	while ((*(str + i) >= 48 && *(str + i) <= 57))
	{
		num = (num * 10) + (*(str + i) - '0');
		i++;
	}
	return (num * sign);
}

// int		main()
// {
// 	char	str[] = "1234";
// 	char	str1[] = " 1234";
// 	char	str2[] = "12 34";
// 	char	str3[] = "-12 34";

// 	printf("%d", ft_atoi(str3));
// }
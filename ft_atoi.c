/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheadles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:14:26 by wheadles          #+#    #+#             */
/*   Updated: 2021/10/22 17:14:30 by wheadles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long	n;
	int					sign;

	n = 0;
	sign = 1;
	while (*str == '\f' || *str == '\r' || *str == '\n' \
	|| *str == '\v' || *str == '\t' || *str == ' ')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (ft_isdigit(*str))
	{
		n = n * 10 + *str++ - '0';
		if (sign == -1 && n >= 9223372036854775807)
			return (0);
		else if (sign == 1 && n >= 9223372036854775807)
			return (-1);
	}
	return (n * sign);
}

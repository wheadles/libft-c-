/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheadles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:11:08 by wheadles          #+#    #+#             */
/*   Updated: 2021/10/26 16:11:14 by wheadles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*trans_fun(char *z, long m, int i)
{
	if (m < 0)
	{
		while (i)
		{
			z[i - 1] = -m % 10 + '0';
			m = m / 10;
			i--;
		}
		z[0] = '-';
	}
	else
	{
		while (i)
		{
			z[i - 1] = m % 10 + '0';
			m = m / 10;
			i--;
		}
	}
	return (z);
}

char	*ft_itoa(int n)
{
	char	*z;
	int		i;
	long	m;

	m = n;
	i = 0;
	if (n == 0 || n == -0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	if (m < 0)
		i++;
	z = (char *)ft_calloc((i + 1), sizeof(char));
	if (!z)
		return (NULL);
	trans_fun(z, m, i);
	return (z);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheadles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:04:38 by wheadles          #+#    #+#             */
/*   Updated: 2021/10/24 15:04:44 by wheadles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*z1;
	unsigned char	*z2;

	z1 = (unsigned char *)str1;
	z2 = (unsigned char *)str2;
	if (n == 0)
		return (0);
	n--;
	while (*z1 == *z2 && n--)
	{
		z1++;
		z2++;
	}
	return ((int)(*z1 - *z2));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheadles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:03:08 by wheadles          #+#    #+#             */
/*   Updated: 2021/10/24 15:03:18 by wheadles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)arr;
	while (n--)
	{
		if (*str++ == (unsigned char)c)
			return (str - 1);
	}
	return (NULL);
}

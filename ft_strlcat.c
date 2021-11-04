/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheadles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:43:26 by wheadles          #+#    #+#             */
/*   Updated: 2021/10/20 19:43:34 by wheadles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	z;
	size_t	destsize;
	size_t	srcsize;

	destsize = ft_strlen(dest);
	srcsize = ft_strlen(src);
	z = destsize + srcsize;
	if (destsize >= size)
		return (size + srcsize);
	else
	{
		size = size - destsize;
		while (size > 1 && *src)
		{
			dest[destsize] = *src;
			src++;
			destsize++;
			size--;
		}
		dest[destsize] = '\0';
	}
	return (z);
}

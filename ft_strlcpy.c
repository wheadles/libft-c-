/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheadles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 20:06:17 by wheadles          #+#    #+#             */
/*   Updated: 2021/10/20 20:06:24 by wheadles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	srcsize;
	size_t	srclen;

	srclen = ft_strlen(src);
	srcsize = srclen + 1;
	if (srcsize < size)
	{
		while (srcsize--)
			*dest++ = *src++;
	}
	else if (size != 0)
	{
		while (--size)
			*dest++ = *src++;
		*dest = '\0';
	}
	return (srclen);
}

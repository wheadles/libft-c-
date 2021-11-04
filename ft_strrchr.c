/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheadles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 20:09:44 by wheadles          #+#    #+#             */
/*   Updated: 2021/10/20 20:09:49 by wheadles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*z;

	z = str;
	while (*str)
		str++;
	while (str >= z)
	{
		if (*str-- == (char)c)
			return ((char *)str + 1);
	}
	return (NULL);
}

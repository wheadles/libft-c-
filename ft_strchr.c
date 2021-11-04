/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheadles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:28:56 by wheadles          #+#    #+#             */
/*   Updated: 2021/10/20 19:29:05 by wheadles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str++ == (char)c)
			return ((char *)str - 1);
	}
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}

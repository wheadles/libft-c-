/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheadles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 20:14:46 by wheadles          #+#    #+#             */
/*   Updated: 2021/10/23 20:14:52 by wheadles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	z_len;
	char	*z;

	if (!s1 || !s2)
		return (NULL);
	z_len = ft_strlen(s1) + ft_strlen(s2);
	z = malloc(sizeof(char) * z_len + 1);
	if (!z)
		return (NULL);
	while (*s1)
		*z++ = *s1++;
	while (*s2)
		*z++ = *s2++;
	*z = '\0';
	return (z - z_len);
}

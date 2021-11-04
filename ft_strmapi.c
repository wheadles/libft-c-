/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheadles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:36:53 by wheadles          #+#    #+#             */
/*   Updated: 2021/10/24 17:06:25 by wheadles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*z;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	z = (char *)malloc(ft_strlen(s) + 1);
	if (!z)
		return (NULL);
	while (s[i])
	{
		z[i] = f(i, s[i]);
		i++;
	}
	z[i] = '\0';
	return (z);
}

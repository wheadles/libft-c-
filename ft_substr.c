/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheadles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 19:35:25 by wheadles          #+#    #+#             */
/*   Updated: 2021/10/23 19:35:41 by wheadles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*test_s1(char *ss)
{
	if (!ss)
		return (NULL);
	else
	{
		ss[0] = 0;
		return (ss);
	}
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s1_len;
	char	*s1;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	s1_len = len;
	if (start >= ft_strlen(s))
	{
		s1 = (char *)malloc(1);
		s1 = test_s1(s1);
		return (s1);
	}
	else
	{
		s1 = ft_calloc(len + 1, sizeof(char));
		if (!s1)
			return (NULL);
		while (len--)
			*s1++ = s[start++];
	}
	*s1 = '\0';
	return (s1 - s1_len);
}

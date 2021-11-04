/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheadles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 18:47:06 by wheadles          #+#    #+#             */
/*   Updated: 2021/10/25 18:47:11 by wheadles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	res_free(char **res)
{
	int	f;

	f = 0;
	while (res[f])
	{
		free(res[f]);
		f++;
	}
	free(res);
}

int	words_count(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			while (*s && *s == c)
				s++;
		else if (*s != c)
		{
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	return (i);
}

char	**ft_pop(char **res, int i, char const *s, char c)
{
	int			count;
	char const	*ss;

	count = 0;
	ss = s;
	while (*s && *s != c)
	{
		count++;
		s++;
	}
	res[i] = (char *)ft_calloc(count + 1, sizeof(char));
	if (!res[i])
		res_free(res);
	count = 0;
	while (*ss && *ss != c)
	{
		res[i][count] = *ss;
		count++;
		ss++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**res;
	int		w_count;

	if (!s)
		return (NULL);
	w_count = words_count(s, c);
	res = (char **)ft_calloc(w_count + 1, sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s == c)
			while (*s && *s == c)
				s++;
		else if (*s != c)
		{
			res = ft_pop(res, i, s, c);
			while (*s && *s != c)
				s++;
			i++;
		}
	}
	return (res);
}

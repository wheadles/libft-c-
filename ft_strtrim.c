/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheadles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 20:35:01 by wheadles          #+#    #+#             */
/*   Updated: 2021/10/23 20:35:28 by wheadles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
// #include <stdio.h>
char	*ft_strtrim(char const *s1, char const *set)
{
	char			*z;
	size_t			length;
	unsigned int	i;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	length = ft_strlen(s1);
	while (length > 0 && ft_strchr(set, s1[length]))
		length--;
	z = ft_substr(s1, i, length - i + 1);
	return (z);
}

// int main()
// {
// 	char *s1 = "  \t \t \n   \n\n\n\t";
// 	char *s2 = "";
// 	char *ret = ft_strtrim(s1, " \n\t");
// 	printf("%s\n", ret);
// }
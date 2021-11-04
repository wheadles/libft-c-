/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheadles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:39:12 by wheadles          #+#    #+#             */
/*   Updated: 2021/10/22 16:39:15 by wheadles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t	num, size_t	size)
{
	char	*z;

	z = malloc(num * size);
	if (!z)
		return (NULL);
	ft_bzero(z, num * size);
	return (z);
}

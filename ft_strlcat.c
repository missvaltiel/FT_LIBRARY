/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:30:38 by karvin            #+#    #+#             */
/*   Updated: 2016/10/08 15:35:18 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		a;
	size_t		b;

	a = 0;
	while (dst[a] && a < size)
		a++;
	b = a;
	while (src[a - b] && a < size - 1)
	{
		dst[a] = src[a - b];
		a++;
	}
	if (b < size)
		dst[a] = '\0';
	return (b + ft_strlen(src));
}

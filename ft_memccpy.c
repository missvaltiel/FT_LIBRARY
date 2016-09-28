/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 00:37:16 by karvin            #+#    #+#             */
/*   Updated: 2016/09/28 01:48:35 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*dst_buf;
	char		*src_buf;
	size_t		i;

	dst_buf = (char *)dst;
	src_buf = (char *)src;
	i = 0;
	while (i < n)
	{
		dst_buf[i] = src_buf[i];
		if (dst_buf[i] == (unsigned char)c)
			return (dst[i]);
		i++;
	}
	return (NULL);
}

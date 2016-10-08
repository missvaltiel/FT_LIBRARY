/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 00:37:16 by karvin            #+#    #+#             */
/*   Updated: 2016/10/08 14:30:47 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dst_buf;
	unsigned char		*src_buf;
	size_t				i;

	dst_buf = (unsigned char *)dst;
	src_buf = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dst_buf[i] = src_buf[i];
		if (dst_buf[i] == (unsigned char)c)
			return (&dst_buf[i] + 1);
		i++;
	}
	return (NULL);
}

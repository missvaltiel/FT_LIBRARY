/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:28:17 by karvin            #+#    #+#             */
/*   Updated: 2016/10/08 14:45:26 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_buf;
	char		*src_buf;
	size_t		i;

	i = 0;
	dst_buf = (char *)dst;
	src_buf = (char *)src;
	if (dst_buf > src_buf)
	{
		while (len >= i)
		{
			dst_buf[len - i] = src_buf[len - i];
			++i;
		}
	}
	else
	{
		while (i < len)
		{
			dst_buf[i] = src_buf[i];
			++i;
		}
	}
	return (dst);
}

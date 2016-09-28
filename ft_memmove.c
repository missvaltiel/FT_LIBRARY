/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:28:17 by karvin            #+#    #+#             */
/*   Updated: 2016/09/27 22:20:08 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*ch_src;
	char		*ch_dst;
	size_t		slen;

	ch_src = (char *)src;
	ch_dst = (char *)dst;
	slen = 0;
	if (src == dst)
		return (dst);
	else if (src > dst)
		ft_memcpy(dst, src, len);
	else
	{
		while (ch_src[slen] != 0)
			slen++;
		while (slen > 0)
		{
			ch_dst[slen] = ch_src[slen];
			slen--;
		}
	}
	return (dst);
}

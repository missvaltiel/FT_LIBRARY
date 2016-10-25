/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:28:17 by karvin            #+#    #+#             */
/*   Updated: 2016/10/21 14:56:25 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*dest;
	const char		*sorc;

	if (src == dst || len == 0)
		return (dst);
	else if (dst < src)
		return (ft_memcpy(dst, src, len));
	else
	{
		sorc = (const char*)src;
		dest = (char*)dst;
		while (--len)
			dest[len] = ((char*)sorc)[len];
		dest[0] = ((char*)src)[0];
		return (dst);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:28:07 by karvin            #+#    #+#             */
/*   Updated: 2016/09/26 14:59:31 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dest, const void *src, size_t n);
{
	size_t				i;
	unsigned char		*dest1;
	unsigned char		*src1;

	i = 0;
	dest1 = (unsigned char*)dest;
	src1 = (unsigned char*)src;
	while (i < n)
	{
		dest[i] = src[i];
		i++
	}
		return (dest);
}

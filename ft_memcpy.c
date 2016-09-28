/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:28:07 by karvin            #+#    #+#             */
/*   Updated: 2016/09/27 17:36:48 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest1;
	unsigned char		*src1;

	i = 0;
	dest1 = (unsigned char*)dest;
	src1 = (unsigned char*)src;
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
		return (dest);
}

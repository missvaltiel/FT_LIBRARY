/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:30:38 by karvin            #+#    #+#             */
/*   Updated: 2016/10/04 22:49:19 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		in1;
	size_t		in2;

	in1 = ft_strlen(src);
	in2 = 0;	
	while (src != '\0' && in2 < size)
	{
		dst[in1 + in2] = src[in2];
		in2++;
	}
	dst[in1 + in2] = '\0';
	return (in1 + size);
}

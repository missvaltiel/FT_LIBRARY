/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:27:53 by karvin            #+#    #+#             */
/*   Updated: 2016/09/27 22:12:37 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ch_s1;
	unsigned char	*ch_s2;

	ch_s1 = (unsigned char*)s1;
	ch_s2 = (unsigned char*)s2;
	while (n--)
	{
		if (*ch_s1 != *ch_s2)
			return ((int)(*ch_s1 - *ch_s2));
		ch_s1++;
		ch_s2++;
	}
	return (0);
}

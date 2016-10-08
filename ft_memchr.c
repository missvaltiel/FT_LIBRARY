/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:27:41 by karvin            #+#    #+#             */
/*   Updated: 2016/10/08 14:53:27 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *str, int c, size_t n)
{
	int		i;

	i = 0;
	while (i < n)
		if (*((unsigned char*)str + i) == (unsigned char)c)
			return ((void*)((char*)str + i));
		else
			i++;
	return (NULL);
}

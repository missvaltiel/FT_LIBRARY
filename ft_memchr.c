/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:27:41 by karvin            #+#    #+#             */
/*   Updated: 2016/09/22 23:03:47 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *byte_arr, int find, int n)
{
	int		i;

	i = 0;
	while (i< n)
		if (*((char*)byte_arr + i) == (unsigned char)find)
			return ((void*)((char*)byte_arr + i));
		else
			i++;
	return (NULL);
}

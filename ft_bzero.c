/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:26:30 by karvin            #+#    #+#             */
/*   Updated: 2016/10/08 14:10:10 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char		*buf;
	unsigned char		zero;

	buf = (unsigned char *)s;
	zero = 0;
	while (n > 0)
	{
		*buf = zero;
		n--;
		buf++;
	}
}

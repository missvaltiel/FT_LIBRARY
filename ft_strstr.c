/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 15:38:25 by karvin            #+#    #+#             */
/*   Updated: 2016/10/18 09:56:15 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *big, const char *lit)
{
	size_t		bi;
	size_t		mi;
	size_t		li;

	bi = 0;
	mi = 0;
	li = 0;
	if (ft_strlen(lit) == 0)
		return ((char *)big);
	while (big[bi] != 0)
	{
		mi = bi;
		while (big[mi] != 0 && big[mi] == lit[li])
		{
			if (lit[li + 1] == 0)
				return ((char *)big + mi - li);
			mi++;
			li++;
		}
		li = 0;
		bi++;
	}
	return ((char *)NULL);
}

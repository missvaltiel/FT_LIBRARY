/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 15:38:25 by karvin            #+#    #+#             */
/*   Updated: 2016/10/10 12:52:33 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *big, const char *little)
{
	size_t		bi;
	size_t		mi;
	size_t		li;

	bi = 0;
	mi = 0;
	li = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (big[bi] != 0)
	{
		mi = bi;
		while (big[mi] != 0 && big[mi] == little[li])
		{
			if (little[li + 1] == 0)
				return ((char *)big + mi - li);
			mi++;
			li++;
		}
		li = 0;
		bi++;
	}
	return ((char *)NULL);
}

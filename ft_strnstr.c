/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 23:33:46 by karvin            #+#    #+#             */
/*   Updated: 2016/10/21 15:05:53 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	big_in;
	size_t	big_sin;
	size_t	lit_in;

	big_in = 0;
	if (ft_strlen(little) == 0)
		return ((char*)big);
	while (big[big_in] != 0 && big_in < len)
	{
		big_sin = big_in;
		lit_in = 0;
		while (big_sin < len && big[big_sin] == little[lit_in])
		{
			if (little[lit_in + 1] == 0)
				return ((char *)big + big_sin - lit_in);
			big_sin++;
			lit_in++;
		}
		lit_in = 0;
		big_in++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 23:33:46 by karvin            #+#    #+#             */
/*   Updated: 2016/09/28 05:54:23 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		big_in;
	int		lit_in;

	big_in = 0;
	lit_in = 0;
	while (big[big_in] != little[lit_in])
	{
		if (big[big_in] == '\0' || len == 0)
			return (NULL);
		big_in++;
		len--;
	}
	while (big[big_in] != '\0' && big[big_in] == little[lit_in] && len > 0)
	{
		big_in;
		lit_in;
		len--;
	}
	if (little[lit_in] == '\0')
		return ((char *)big + (big_in - lit_in));
	else
		return (NULL);
}

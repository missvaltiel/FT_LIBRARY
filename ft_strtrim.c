/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 09:54:02 by karvin            #+#    #+#             */
/*   Updated: 2016/10/18 12:55:54 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t		start;
	size_t		len;
	char		*res;

	if (s != NULL)
	{
		start = 0;
		while (ft_isbblank(s[start]))
			start++;
		len = ft_strlen(s + start);
		if (len > 0)
			while (ft_isbblank(s[start + len - 1]))
				len--;
		res = ft_strsub(s, start, len);
		return (res);
	}
	return (NULL);
}

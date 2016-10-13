/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 00:01:16 by karvin            #+#    #+#             */
/*   Updated: 2016/10/11 00:39:45 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char		*src;
	char		*dst;
	size_t		i;

	src = (char *)s;
	if (src && f)
	{
		dst = ft_strnew(ft_strlen(s));
		if (dst == NULL)
			return (NULL);
		i = 0;
		while (src[i] != '\0')
		{
			dst[i] = (*f)(src[i]);
			i++;
		}
		return (dst);
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 00:52:23 by karvin            #+#    #+#             */
/*   Updated: 2016/10/11 01:10:56 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*new;
	size_t		newlen;
	int			i;

	i = 0;
	if (s && f)
	{
		newlen = ft_strlen(s);
		new = ft_memalloc(newlen + 1);
		if (new == NULL)
			return (NULL);
		while (*s)
		{
			new[i] = f(i, *s);
			i++;
			s++;
		}
		return (new);
	}
	return (NULL);
}

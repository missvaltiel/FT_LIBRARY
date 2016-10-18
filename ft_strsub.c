/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/14 12:23:01 by karvin            #+#    #+#             */
/*   Updated: 2016/10/18 09:40:21 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*buf;

	i = 0;
	buf = (char *)ft_memalloc(len + 1);
	if (buf == NULL)
		return (NULL);
	if ((s == NULL) || (start > ft_strlen(s)))
		return (NULL);
	while (i < len && s[start] != '\0')
	{
		buf[i] = s[start];
		start++;
		i++;
	}
	buf[i] = '\0';
	return (buf);
}

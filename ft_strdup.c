/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:30:29 by karvin            #+#    #+#             */
/*   Updated: 2016/09/28 02:44:27 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *str)
{
	char		*dup;
	size_t		len;

	len = ft_strlen(str) + 1;
	dup = (char*)malloc(len);
	p = dup;
	while (*src)
		*p++ = *src++;
	*p = '\0';
	return (str);
}

int			main()
{

	return (0);
}

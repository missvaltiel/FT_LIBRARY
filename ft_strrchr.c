/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:31:26 by karvin            #+#    #+#             */
/*   Updated: 2016/09/24 21:38:54 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strrchr(const char *str, int c)
{
	size_t		len;

	len = ft_strlen((char *)str);
	while (len > 0)
	{
		if (str[len] == c)
			return ((char*)str + len);
		len--;
	}
	return (NULL);
}

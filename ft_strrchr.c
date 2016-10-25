/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:31:26 by karvin            #+#    #+#             */
/*   Updated: 2016/10/21 15:04:30 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char		*new;

	new = (char*)str + ft_strlen(str);
	while (new >= str)
	{
		if (*new == c)
			return (new);
		new--;
	}
	return (NULL);
}

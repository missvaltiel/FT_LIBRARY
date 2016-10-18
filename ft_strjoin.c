/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 10:03:04 by karvin            #+#    #+#             */
/*   Updated: 2016/10/18 10:42:40 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char		*res;

	if (s1 != NULL && s2 != NULL)
	{
		res = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
		if (res != NULL)
		{
			ft_strcat(res, s1);
			ft_strcat(res, s2);
		}
		return (res);
	}
	return (NULL);
}

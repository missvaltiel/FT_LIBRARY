/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:30:07 by karvin            #+#    #+#             */
/*   Updated: 2016/09/26 15:36:58 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict str1, const char *restrict str2)
{
	size_t		add;
	size_t		i;

	add = ft_strlen(str1);
	i = 0;
	while (str2 != '\0')
	{
		str1[add + i] = str2[i];
		i++;
	}
	str1[add + i] = '\0';
	return (str);
}

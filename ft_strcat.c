/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:30:07 by karvin            #+#    #+#             */
/*   Updated: 2016/09/28 06:26:44 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strcat(char *str1, const char *str2)
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
	return (str1);
}

int		main()
{
	char	*str1 = "what the fuck";
	char	*str2 = "is going on";

	printf("I have one string: '%s' and another string '%s'. I will put them together", str1, str2);
	printf(ft_strcat(str1, str2));

	return (0);
}

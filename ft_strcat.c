
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

#include <string.h>
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strcat(char *dst, const char *src)
{
	size_t		dstlen;
	size_t		i;

	dstlen = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0')
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dst);
}

int		main()
{
	char		*str1;
	char		*str2;
	char		*sum_str;
	size_t		i1;
	size_t		i2;
	size_t		sum;
	str1 = (char *) malloc(ft_strlen(str1));
	str2 = (char *) malloc(ft_strlen(str2));
	i1 = ft_strlen(str1) + 1;
	i2 = ft_strlen(str2) + 1;
	sum = i1 + i2;
	ft_strcpy(str1, "Silent");
	ft_strcpy(str2, "Hill");
	sum_str = (char *) malloc(sum);
	sum_str = ft_strcat(str1, str2);
	ft_putstr(sum_str);
	ft_putstr("\nSuccess.\n");
	return (0);
}

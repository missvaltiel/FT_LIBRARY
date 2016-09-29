/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:30:50 by karvin            #+#    #+#             */
/*   Updated: 2016/09/28 06:28:53 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t		dst_size;
	size_t		i;

	dst_size = ft_strlen(dst);
	while (src[i] != '\0' && i < n)
	{
		dst[dst_size + i] = src[i];
		i++;
	}
	dst[dst_size + i] = '\0';
	return (dst);
}
/*
int		main()
{
	char		*str1;
	char		*str2;
	size_t		*sum_str;
	size_t		i1;
	size_t		i2;
	size_t		sum;

	str1 = (char *) malloc(ft_strlen(str1));
	str2 = (char *) malloc(ft_strlen(str2));
	i1 = ft_strlen(str1) + 1;
	i2 = ft_strlen(str2) + 1;
	sum = i1 + i2;
	ft_strcpy(str1, "When in doubt");
	ft_strcpy(str2, " rock it out.");
	sum_str = (char *) malloc(sum);
	sum_str = ft_strcat(str1, str2);
	ft_putstr(sum_str);
	ft_putstr("\nSuccess.\n");
	return (0);
}
*/

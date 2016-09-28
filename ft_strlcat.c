/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:30:38 by karvin            #+#    #+#             */
/*   Updated: 2016/09/28 06:28:43 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		in1;
	size_t		in2;

	in1 = ft_strlen(src);
	in2 = 0;	
	while (src != '\0' && in2 < size)
	{
		dst[in1 + in2] = src[in2];
		in2++;
	}
	dst[in1 + in2] = '\0';
	return (in1 + size);
}

int		main()
{
	char		*dst;
	const char	*src;
	size_t		size;
	char		*idk;

	src = "Hellooww";
	size = ft_strlen(dst);
	printf("String one: %s\n", dst);
	printf("String two: %s\n", src);
	ft_strlcat(dst, src, size);
	return (0);
}

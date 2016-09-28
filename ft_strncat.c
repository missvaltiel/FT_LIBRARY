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
	size_t		i;
	size_t		dst_size;

	i = 0;
	dst_size = ft_strlen(dst);
	while (*src != '\0' && i < n)
	{
		dst[dst_size + i] = src[i];
		i++;
	}
	dst
/*	while (i < n && src[i])
	{
		dst[dst_size] = src[i];
		dst_size++;
		i++;
	}
	dst[dst_size] = '\0';
	return (dst);
}
*/
int		main()
{
	char		*dst;
	const char	*src = "I no not what I do.";
	size_t		n;

	n = 8;
	printf("%s", src);
	printf("\n%s", ft_strncat(dst, src, n));
	return (0);
}

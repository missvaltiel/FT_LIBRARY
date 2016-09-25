/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 11:56:07 by karvin            #+#    #+#             */
/*   Updated: 2016/09/24 22:59:19 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	char		*str;
	size_t		i;

	str = (char *)b;
	i = 0;
	while (len > 0)
	{
		str[i] = (unsigned char)c;
		i++;
		len--;
	}
	return (b);
}

/*
void	*ft_memset(void *start, int c, size_t, n)
{
	unsigned char	*wc;

	wc = (unsigned char *)start;
	while (n > 0)
	{
		*wc = (unsigned char)c;
		n--;
		wc++;
	}
	return (starti);
}
*/
int		main()
{
	int		 		a[20];
	const char		*len;

	len = (const char *)ft_strlen(a);
	ft_memset(a, 1, len);
	return (0);
}

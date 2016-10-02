/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 11:56:07 by karvin            #+#    #+#             */
/*   Updated: 2016/10/02 01:47:48 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void		*ft_memset(void *b, int c, size_t len)
{
	unsigned char		*ptr;

	ptr = (unsigned char *)b;
	while (len > 0)
	{
		*ptr = (unsigned char)c;
		len--;
		ptr++;
	}
	return (b);
}
*/

void		*ft_memset(void *b, int c, size_t len)
{
	char		*str;
	size_t		i;

	str = (char *)b;
//remember to coerce back in return.
	i = 0;
	while (str[i] != '\0' && len > 0) 
	{

	}
	
	return (b);
}

int			main()
{
	char		*str;
	int			c;
	size_t		len;

	str = "Mustang kids are out...";
	c = 4;
	len = 2;
	ft_putstr(str);
	ft_memset((unsigned char *)str, c, len);
	ft_putstr(str);
	return (0);
}

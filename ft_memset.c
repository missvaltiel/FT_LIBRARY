/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 11:56:07 by karvin            #+#    #+#             */
/*   Updated: 2016/10/02 23:53:05 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	unsigned char		*str;
	size_t				i;

	str = b;
	i = 0;
	while (str[i] != '\0' && len > 0)
	{
		str[i++] = c;
		len--;
	}
	return (b);
}
/*
int			main()
{
	char str[50];

	ft_strcpy(str, "This is string.h library function");
	ft_putstr(str);
	ft_putchar('\n');
	ft_memset(str, '$', 7);
	ft_putstr(str);

	return (0);
}
*/

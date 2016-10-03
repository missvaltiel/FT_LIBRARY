/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:26:30 by karvin            #+#    #+#             */
/*   Updated: 2016/10/02 23:57:43 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char		*str;
	size_t				i;

	str = s;
	i = 0;
	while (str[i] != '\0')
		str[i++] = 0;
}
/*
int		main()
{
	char str[50];

	ft_strcpy(str, "This is a string.h library function");
	ft_putstr(str);
	ft_putchar('\n');
	bzero(str, 0);
	ft_putstr(str);

	return (0);
}
*/

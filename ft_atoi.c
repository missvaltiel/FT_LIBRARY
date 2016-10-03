/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 14:37:33 by karvin            #+#    #+#             */
/*   Updated: 2016/10/02 23:57:05 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_atoi(const char *str)
{
	int		output;
	int		neg;
	int		i;

	i = 0;
	output = 0;
	neg = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		output = (output * 10) + (str[i++] - '0');
	return (neg * output);
}
/*
int		main()
{
	int		val;
	char	str[20];

	ft_strcpy(str, "98993489");
	val = ft_atoi(str);
	ft_putstr(str);
	ft_putchar('\n');
	ft_putnbr(val);
	ft_putchar('\n');
	ft_strcpy(str, "missvaltieliswin");
	val = ft_atoi(str);
	ft_putstr(str);
	ft_putchar('\n');
	ft_putnbr(val);

	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 15:33:25 by karvin            #+#    #+#             */
/*   Updated: 2016/10/03 00:05:41 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int		ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
/*
int		main()
{
	int		i = 0;
	char	str[] = "c3po...";

	while (ft_isalnum(str[i])) i++;
	ft_putstr("The first ");
	ft_putnbr(i);
	ft_putstr(" are alphanumeric.");
	return (0);
}
*/

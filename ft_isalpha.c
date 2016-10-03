/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 14:29:06 by karvin            #+#    #+#             */
/*   Updated: 2016/10/03 00:20:46 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int		ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/*
int		main()
{
	char c;
	c = 'Q';
	ft_putnbr(ft_isalpha(c));
	ft_putchar('\n');
	c = 'a';
	ft_putnbr(ft_isalpha(c));
	ft_putchar('\n');
	c = '+';
	ft_putnbr(ft_isalpha(c));
	ft_putchar('\n');
	return (0);
}
*/

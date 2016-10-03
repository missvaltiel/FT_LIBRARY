/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 14:23:59 by karvin            #+#    #+#             */
/*   Updated: 2016/10/03 01:43:38 by karvin           ###   ########.fr       */
/*                                                                            */
/* ***************************i*********************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int		ft_isdigit(int c)
{
	return (c <= '9' && c >= '0');
}
/*
int		main()
{
	int		var1 = 'h';
	int		var2 = '2';

	if(ft_isdigit(var1))
	{
		ft_putstr("is a digit");
		ft_putnbr(var1);
	}
	else
	{
		ft_putstr("is not a digit");
		ft_putnbr(var1);
	}
	if(ft_isdigit(var2))
	{
		ft_putstr("is a digit2");
		ft_putnbr(var2);
	}
	else
	{
		ft_putstr("is not a digit2");
		ft_putnbr(var2);
	}
	return (0);
}
*/

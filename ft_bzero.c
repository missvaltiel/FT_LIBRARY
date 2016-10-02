/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:26:30 by karvin            #+#    #+#             */
/*   Updated: 2016/10/02 00:44:12 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

int		main()
{
	void		*str;
	size_t		zero;
	str = "Yessss";
	zero = ;

	ft_putstr(str);
	ft_putchar('\n');
	bzero(str, zero);
	ft_putstr(str);
	return (0);
}

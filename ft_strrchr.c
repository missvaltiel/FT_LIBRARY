/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:31:26 by karvin            #+#    #+#             */
/*   Updated: 2016/09/22 23:03:04 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	char	*last;

	last = NULL;
	while (*str)
	{
		if (*str == (const char *)c)
			last = str;
		str++;
	}
	return (last);
}

int	main()
{
/*	char	*str;
	int	i;

	str[] = "Hello";
*/
	write (1, *ft_strrchr("hel lo", 32), 3);
	return (0);
}

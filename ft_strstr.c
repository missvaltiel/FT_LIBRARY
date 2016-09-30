/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 15:38:25 by karvin            #+#    #+#             */
/*   Updated: 2016/09/27 22:27:58 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char		*ft_strstr(const char *big, const char *little)
{
	size_t		big_in;
	size_t		lit_in;

	big_in = 0;
	lit_in = 0;
	if (little[lit_in] == '\0')
		return ((char *)big);
	while (big[big_in] != little[lit_in])
	{
		if (big[big_in] == '\0')
			return (NULL);
		big_in++;
	}
	while (big[big_in] != '\0' && big[big_in] == little[lit_in])
	{
		big_in++;
		lit_in++;
	}
	if (little[lit_in] == '\0')
		return ((char *)big + (big_in - lit_in));
	else
		return (NULL);
}

int		main()
{
	char *string = "Test for a string";
	char *little = "for";

	ft_putstr(ft_strstr(string, little));
	return (0);
}

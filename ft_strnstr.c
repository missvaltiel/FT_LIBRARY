/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:31:02 by karvin            #+#    #+#             */
/*   Updated: 2016/09/27 18:13:36 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		index;
	size_t		index2;
	
	index2 = 0;
	if (!*little || !*big)
		return ((char *)big);
	while (big[index] != '\0')
	{
	}
	if ((little > big) || 
}

int			main()
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;

	ptr = ft_strnstr(largestring, smallstring, 4)
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 15:38:25 by karvin            #+#    #+#             */
/*   Updated: 2016/09/26 15:40:10 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	size_t		hay_in;
	size_t		need_in;
	char		*buf

	while (haystack[hay_in] != '\0')
	{
		if (needle[need_in] == '\0')
		{
			*buf = haystack + (hay_in - need_in);			
			return (buf);
		}
		if (haystack[hay_in] == needle[need_in])
			need_in++;
		else
			need_in = 0;
		hay_in++;
	}
	return (NULL);
}
int		main()
{
	char string[17] = "Test for a string";
	char *p;
	p = ft_strstr(string, "for");
	
	printf("start");
	if (p)
	{
		printf("first occ of string of for in \"%s\" is \"%s\"", string, p);
	}
	else printf("error\n");
	return (0);

}

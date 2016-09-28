/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 15:38:25 by karvin            #+#    #+#             */
/*   Updated: 2016/09/27 18:47:40 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char		*ft_strstr(const char *big, const char *little)
{
	size_t		big_in;
	size_t		lit_in;
	size_t		len;

	big_in = 0;
	lit_in = 0;
	len = 0;
	if (little[lit_in] == '\0' || big[big_in] == '\0')
		return ((char *)big);
	while (big[big_in] != '\0')
	{
		if (big[big_in] != little[lit_in])
		{
			big_in++;
		}
		if (big[big_in] == little[lit_in])
		{

		}
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

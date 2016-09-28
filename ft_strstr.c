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
#include "libft.h"

char		*ft_strstr(const char *big, const char *little)
{
	size_t		big_in;
	size_t		lit_in;

	big_in = 0;
	lit_in = 0;
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

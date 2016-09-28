/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:30:29 by karvin            #+#    #+#             */
/*   Updated: 2016/09/28 04:01:39 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *str)
{
	char		*dup;

	dup = (char *) malloc(ft_strlen(str) + 1);
	if (dup == NULL)
		return (NULL);
	ft_strcpy(dup, str);
	return (dup);
}

int			main()
{
	const char	*str = "This is a string.";

	printf("%s", str);
	printf("\n%s", ft_strdup(str));
	return (0);
}

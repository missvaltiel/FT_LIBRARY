/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 09:21:35 by karvin            #+#    #+#             */
/*   Updated: 2016/10/18 12:54:32 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count(const char *s, char c)
{
	int		count;
	int		in_sub;

	count = 0;
	in_sub = 0;
	while (*s != '\0')
	{
		if (in_sub == 1 && *s == c)
			in_sub = 0;
		if (in_sub == 0 && *s != c)
		{
			in_sub = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static int		ft_fndlen(const char *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**t;
	int			nb_word;
	int			i;

	if (s != NULL)
	{
		i = 0;
		nb_word = ft_count((const char *)s, c);
		t = (char **)malloc(sizeof(*t) * (ft_count((const char *)s, c) + 1));
		if (t == NULL)
			return (NULL);
		while (nb_word--)
		{
			while (*s == c && *s != '\0')
				s++;
			t[i] = ft_strsub((const char *)s, 0, ft_fndlen((const char *)s, c));
			if (t[i] == NULL)
				return (NULL);
			s = s + ft_fndlen(s, c);
			i++;
		}
		t[i] = NULL;
		return (t);
	}
	return (NULL);
}

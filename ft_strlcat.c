/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:30:38 by karvin            #+#    #+#             */
/*   Updated: 2016/09/28 02:13:14 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	// if src and dst overlap the behavior is undefined
	// take full size of the dst buffer and gaurantee NUL-term if there is room. Note that room for NUL should be included in size
	// copies up to size - 1 characters from the string src to dst, 
	// NUL terminating the result if size is not 0;

	return (total amount of string strlcpy tried to create(for_strlcpy this is length of source)
}

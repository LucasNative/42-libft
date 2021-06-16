/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel- <ldaniel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 14:28:53 by ldaniel-          #+#    #+#             */
/*   Updated: 2021/06/16 12:00:33 by ldaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_last_index;
	size_t	src_last_index;
	size_t	i;

	dst_last_index = ft_strlen(dst);
	src_last_index = ft_strlen(src);
	if (dstsize < dst_last_index)
		return (dstsize + src_last_index);
	if (dstsize > dst_last_index)
	{
		i = 0;
		while (src[i] && (dst_last_index + i) < dstsize - 1)
		{
			dst[dst_last_index + i] = src[i];
		}
		dst[dst_last_index + i] = '\0';
	}
	return (dst_last_index + src_last_index);
}

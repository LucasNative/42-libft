/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel- <ldaniel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:06:12 by ldaniel-          #+#    #+#             */
/*   Updated: 2021/06/16 14:20:14 by ldaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			index;
	unsigned char	*dst_cast;
	unsigned char	*src_cast;

	if ((!dest && !src))
		return (NULL);
	dst_cast = (unsigned char *)dest;
	src_cast = (unsigned char *)src;
	index = 0;
	while (index < n)
	{
		if (dst_cast[index] == (unsigned char)c)
			return (dst_cast++);
		dst_cast[index] = src_cast[index];
		index++;
	}
	return (dst_cast);
}

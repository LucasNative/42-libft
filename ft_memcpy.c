/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel- <ldaniel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 20:52:58 by ldaniel-          #+#    #+#             */
/*   Updated: 2021/06/14 20:16:38 by ldaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*f_dst;
	unsigned char	*f_src;

	if ((!dst && !src))
		return (NULL);
	f_dst = (unsigned char *)dst;
	f_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		f_dst[i] = f_src[i];
		i++;
	}
	return (f_dst);
}

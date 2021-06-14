/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel- <ldaniel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 16:41:34 by ldaniel-          #+#    #+#             */
/*   Updated: 2021/06/14 20:18:53 by ldaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*b_cast;

	if (!b || !c)
		return (NULL);
	b_cast = (char *)b;
	while (len > 0)
	{
		b_cast[len - 1] = c;
		len--;
	}
	return (b_cast);
}

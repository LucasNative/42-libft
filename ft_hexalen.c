/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexalen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel- <ldaniel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 16:38:02 by ldaniel-          #+#    #+#             */
/*   Updated: 2021/07/31 11:57:49 by ldaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_hexalen(size_t num)
{
	size_t	c;

	c = 0;
	if (num == 0)
		return (1);
	while (num)
	{
		num = num / 16;
		c++;
	}
	return (c);
}
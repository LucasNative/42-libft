/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel- <ldaniel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 13:44:52 by ldaniel-          #+#    #+#             */
/*   Updated: 2021/06/16 11:55:59 by ldaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;
	int		diff;

	if ((!s1 && !s2) || n == 0)
		return (0);
	index = 0;
	diff = s1[index] - s2[index];
	while (index < n && (diff == 0))
	{
		index++;
		diff = s1[index] - s2[index];
	}
	return (diff);
}

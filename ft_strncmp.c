/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel- <ldaniel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 13:44:52 by ldaniel-          #+#    #+#             */
/*   Updated: 2021/06/14 16:32:00 by ldaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		diff;

	if ((!s1 && !s2) || n == 0)
		return (0);
	i = 0;
	diff = s1[i] - s2[i];
	while (i < n && (diff == 0))
	{
		i++;
		diff = s1[i] - s2[i];
	}
	return (diff);
}

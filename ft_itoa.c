/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel- <ldaniel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 21:08:27 by ldaniel-          #+#    #+#             */
/*   Updated: 2021/06/27 21:02:06 by ldaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	int_len(int i)
{
	size_t	len;

	len = 0;
	if (i == 0)
		return (1);
	while (i != 0)
	{
		len++;
		i = i / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	size;
	int		signal;

	signal = 0;
	size = int_len(n);
	if (n < 0)
	{
		n = n * -1;
		size = size + 1;
		signal = 1;
	}
	str = ft_calloc(size + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	if (signal == 1)
		str[0] = '-';
	if (n == 0)
		str[--size] = (n % 10) + '0';
	while (n != 0)
	{
		str[--size] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}

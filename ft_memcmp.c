/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfeufeu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 06:53:14 by hfeufeu           #+#    #+#             */
/*   Updated: 2024/10/11 11:29:09 by hfeufeu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	long unsigned int	i;
	const char			*a1;
	const char			*a2;

	i = 0;
	a1 = s1;
	a2 = s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (a1[i] != a2[i])
			return ((unsigned char)a1[i] - (unsigned char)a2[i]);
		i++;
	}
	return (0);
}

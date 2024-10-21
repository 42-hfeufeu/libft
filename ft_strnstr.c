/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfeufeu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 07:44:00 by hfeufeu           #+#    #+#             */
/*   Updated: 2024/10/12 17:52:56 by hfeufeu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_scan(const char *big, const char *little, int b, int l)
{
	while (big[b] == little[l])
	{
		l++;
		b++;
		if (little[l] == '\0')
			return (1);
	}
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	count;

	i = 0;
	j = 0;
	count = 0;
	if (ft_strlen(little) <= 0)
		return ((char *)big);
	if ((big || little) && len)
	{
		while (big[i] != '\0' && count < len)
		{
			if (big[i] == little[j] && ft_strlen(little) <= (len - count))
			{
				if (ft_scan(big, little, i, j) == 1)
					return ((char *)&big[count]);
			}
			j = 0;
			count++;
			i = count;
		}
	}
	return (NULL);
}

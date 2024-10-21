/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfeufeu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:54:16 by hfeufeu           #+#    #+#             */
/*   Updated: 2024/10/11 16:08:29 by hfeufeu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*alo(int i)
{
	char	*s;

	s = ft_calloc((i + 1), sizeof(char));
	if (s == NULL)
		return (NULL);
	s[i] = '\0';
	return (s);
}

static int	ft_count(int n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		n /= 10;
		count += 1;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*s;
	int				i;
	unsigned int	nb;

	nb = n;
	if (nb == 0)
		return (ft_strdup("0"));
	i = ft_count(n);
	if (n < 0)
	{
		++i;
		nb = -n;
	}
	s = alo(i);
	if (s == NULL)
		return (NULL);
	while (--i >= 0)
	{
		s[i] = ((nb % 10) + '0');
		nb = nb / 10;
	}
	if (s[0] == '0')
		s[0] = '-';
	return (s);
}

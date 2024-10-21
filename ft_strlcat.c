/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfeufeu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 08:11:54 by hfeufeu           #+#    #+#             */
/*   Updated: 2024/10/12 17:34:30 by hfeufeu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	if (size == 0)
		return (ft_strlen(src));
	if (dst)
		len = ft_strlen(dst);
	i = 0;
	j = 0;
	while (dst[j] != '\0')
		j++;
	if (size <= len)
		return (size + ft_strlen(src));
	while (src[i] != '\0' && j < (size - 1))
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[len + i] = '\0';
	return (ft_strlen(src) + len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfeufeu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:31:23 by hfeufeu           #+#    #+#             */
/*   Updated: 2024/10/11 10:34:49 by hfeufeu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	j;
	char			*des;

	j = 0;
	if (!s)
		return (NULL);
	if ((start + len) > ft_strlen(s))
		len = (ft_strlen(s) - start);
	if (start >= ft_strlen(s) || s == NULL)
		return (ft_strdup(""));
	des = malloc(sizeof(char) * (len) + 1);
	if (!des)
		return (NULL);
	while (s[start] != '\0' && j < len)
	{
		des[j] = s[start];
		j++;
		start++;
	}
	des[j] = '\0';
	return (des);
}
